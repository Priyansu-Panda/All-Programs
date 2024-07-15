#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

// Function to create a new node
struct node* createNode(int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node in the binary search tree
struct node* insert(struct node *root, int data) {
    if (root == NULL) {
        // If the tree is empty, return a new node
        return createNode(data);
    }

    if (data < root->data) {
        // If data is less than root's data, insert in the left subtree
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        // If data is greater than root's data, insert in the right subtree
        root->right = insert(root->right, data);
    }

    // Return the (unchanged) node pointer
    return root;
}

// Function to find the minimum value node in a tree
struct node* findMin(struct node *root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Function to delete a node from the binary search tree
struct node* deleteNode(struct node *root, int data) {
    if (root == NULL) {
        return root;
    }

    if (data < root->data) {
        // If the data to be deleted is smaller than the root's data, it lies in the left subtree
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        // If the data to be deleted is greater than the root's data, it lies in the right subtree
        root->right = deleteNode(root->right, data);
    } else {

        // If the data to be deleted is equal to the root's data, we have found the node to be deleted
        // Case 1: If the node has no children, simply delete it
        // Node with only one child or no child
        if (root->left == NULL) {
            struct node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        struct node *temp = findMin(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

void preOrder(struct node *root) {
    if (root == NULL) {
        return;
    }
    // Root Left Right
    printf(" %d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(struct node *root) {
    if (root == NULL) {
        return;
    }
    // Left Right Root
    postOrder(root->left);
    postOrder(root->right);
    printf(" %d ", root->data);
}

void inOrder(struct node *root) {
    if (root == NULL) {
        return;
    }
    // Left Root Right
    inOrder(root->left);
    printf(" %d ", root->data);
    inOrder(root->right);
}

int main() {
    struct node *root = NULL;
    int choice, value;

    while (1) {
        printf("\n1. Insert\n2. Delete\n3. PreOrder\n4. PostOrder\n5. InOrder\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;
            case 3:
                printf("PreOrder: ");
                preOrder(root);
                printf("\n");
                break;
            case 4:
                printf("PostOrder: ");
                postOrder(root);
                printf("\n");
                break;
            case 5:
                printf("InOrder: ");
                inOrder(root);
                printf("\n");
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}














/*
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node *create(){       // this fuction is going to return the pointer value/ address of node 
    int i;
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));   //  as newNode is apointer so it will cointaina pointer value/ address andwill point to the "struct node" // will contain a address  ...

    printf("Enter the Value ");
    scanf("%d", &i);

    newNode->data = i;

    if(i == -1){
        return 0;
    }

    printf("Enter the Value of left for Root %d ",i);
    newNode->left = create();          // create() -> will return a pointer to the node 

    printf("Enter the Value of Right for Root %d ",i);
    newNode->right = create();

    return newNode;     // will return the address 
}

void preOrder(struct node *root){
    if(root == 0){
        return;
    }
    // Root Left Right
    printf(" %d ", root -> data);
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(struct node *root){
    if(root == 0){
        return;
    }
    // Left Right Root
    postOrder(root->left);
    postOrder(root->right);
    postOrder(" %d ", root -> data);
}

void inOrder(struct node *root){
    if(root == 0){
        return;
    }

    // Left Root Right
    inOrder(root->left);
    printf(" %d ", root->data);
    inOrder(root-> right);
}

void main()
{
    struct node *root;
    // root = 0 ;
    root = NULL;
    root = create();        // root gonna store add of create  


    printf("PreOrder is: ");
    preOrder(root);

    printf("PostOrder is: ");
    postOrder(root);

    printf("InOrder is: ");
    inOrder(root);

}
*/
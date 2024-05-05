#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *add;
}; struct node *start = NULL,*temp,*new1,*prev,*next;

void main(){

}

create(){
    int n;
    char ch;
    printf("Enter the first element\n");
    scanf("%d",&n);
    start = (struct node*)(malloc(sizeof(struct node)));
    start -> data = n;
    start->add= NULL;
    temp = start;
    printf("Do u Want To Continue??\n");
    scanf(" %c", &ch);
    while (ch=='y' || ch == 'Y')
    {
        printf("Enter the next element\n");
        scanf("%d",&n);
        new1 = (struct node*)(malloc(siizeof(struct node)));
        new1 -> data = n;
        new1->add= NULL;
        temp->add = new1;
        temp= temp->add;    //Now temp is pointing to new1 node
        printf("Do u Want To Cntinue??\n");
        scanf(" %c", &ch);
    }
}

void display(){
    if (start == NULL){
        printf("List NOt Found");
    }
    else
    {
        temp = start;
        while(temp != NULL){
            printf("%d\t",temp->data);
            temp=temp->add;
        }
    }
}

void insertAtBeg(){
     if (start == NULL){
        printf("List NOt Found");
    }
    else{
        printf("Enter the element\n");
        scanf("%d",&n);
        new1 = (struct node*)(malloc(siizeof(struct node)));
        new1->data = n;
        new1->add = NULL;
        new1->add = start;
        start= new1;
    }
}

void insertAtEnd(){

    if (start == NULL){
        printf("List NOt Found");
    }
    else{
        printf("Enter the element\n");
        scanf("%d",&n);
        new1 = (struct node*)(malloc(siizeof(struct node)));
        new1->data = n;
        new1->add = NULL;
        temp = start;
        while (temp->add!=NULL){
            temp = temp->add;
        }
        temp->add = new1;       //Once reached to the final node then add/connect the new node in the final node
    }
}

void insertAtMiddle(){
    int n, pos,i=1;
     if (start == NULL){
        printf("List NOt Found");
    }
    else{
        printf("Enter the element\n");
        scanf("%d",&n);
        new1 = (struct node*)(malloc(siizeof(struct node)));
        new1->data = n;
        new1->add = NULL;

        printf("Enter the position\n");
        scanf("%d",&pos);

        next = start;
        while (i<pos){
            prev = next;
            next = next->add;
            i++;
        }
        prev->add = new1;
        new1->add= next;
    }
}

void deleteFirst(){
     if (start == NULL){
        printf("List NOt Found");
    }
    else{
        temp = start ;
        start = start->add;
        printf("\nElement %d is Deleted \n",temp->data);
        free(temp);
    }
}

void deleteLast(){
     if (start == NULL){
        printf("List NOt Found");
    }
    else
    {
        temp = start;

        // Special case: if there is only one node in the list
        if (temp->add == NULL) {
            printf("Element %d is deleted\n", temp->data);
            free(temp);
            start = NULL; // Update start to NULL as the list becomes empty
            return;
        }
    // Traverse the list to find the last node
        while(temp->add != NULL){
            prev = temp;
            temp= temp->add;
        }
    // Delete the last node
        prev->add=NULL;     //first detach the node
        printf("\nElement %d is Deleted \n",temp->data);
        free(temp);     //delete the node from memory
    }
}

void deletAtMiddle(){
    int pos,i=1;
     if (start == NULL){
        printf("List NOt Found");
    }
    else{
        printf("Enter the Position\n");
        scanf("%d",&pos);
        temp=start;
        while (i<pos)
        {
            prev = temp;
            temp=temp->add;
            i++;
        }
        next=temp->add;
        prev->add=next;
        printf("Element %d is Deleted\n",temp->data);
        free(temp);
    }
}
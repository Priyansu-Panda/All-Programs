#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};
// struct node* temp,*head =NULL,*tp;




struct node* addEmpty(struct node* head, int data){     //Creation of a node (at the beginning)
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;

    temp->next = head; // Connect the new node's next pointer to the current head

    // Update the previous head's prev pointer if it exists
    if (head != NULL) {
        head->prev = temp;
    }

    // Update head to point to the new node
    head = temp;

    return head;
}

struct node* addAtEnd(struct node* head,int data){
    struct node *tp;
    struct node* temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    
    tp = head ;
    while(tp->next!=NULL){
        tp = tp->next;
    }
    tp->next = temp;
    temp->prev= tp;
    return head;
}

struct node* delFirst (struct node* head){
    struct node* temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
    return head;
}
struct node* delLast(struct node* head){        //OR u can declare it externally outside ---> struct node* head
    struct node* temp = head;
    while (temp->next != NULL){
        // prev = temp;
        temp = temp->next;
    }
    prev = temp->prev;
    prev->next = NULL;

    free(temp);
    return head;
};

void printNode(struct node* head){
    struct node* ptr = head;
    while (ptr != NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main(){
    struct node* head = NULL;
    struct node* ptr;

    // Add nodes to the list using addEmpty and update the head pointer each time
    head= addEmpty(head,10);
    head= addEmpty(head,50);
    head= addEmpty(head,30);
    head= addEmpty(head,3);

    printf("Before Delteion:-\n")
    printNode(head);


    printf("after Delteion First Node:-\n")
    head = delFirst(head);
    printNode(head);

    printf("after Delteion last Node:-")
    head = delLast(head);

    printf("Resulatant Node\n\n")
    printNode(head);

    return 0;
}
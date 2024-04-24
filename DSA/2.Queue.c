#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int rear = -1;
// int front = -1;
int front = 0;
int Queue [SIZE];


void insert(){
/*
    int item;
    if( rear == SIZE-1){
        printf("Overflow\n");
        return;
    }
    
    else
    {
        if (rear==-1) {     //if front =-1
            rear+=1;
            front+=1;
        }
        else{
            rear = rear +1 ;
        }
        printf("Enter the element\n");
        scanf("%d",&item);
        
        // scanf("%d",&Queue[rear]);
        Queue[rear] = item;
    }
    return;
*/
    int n;
    
    if(rear == SIZE-1){
        printf("Queue is Overflow\n");
    }
    else{
        printf("ENter the element: ");
        scanf("%d",&n);
        rear++;
        Queue[rear]=n;
    }
    return;
}


void Delete(){

/*
    if (front == -1 || front == rear +1 ){
        printf("Underflow\n");
    }
    else
    {
        printf("Delted item is %d ", Queue[front]);
        front+=1;
    }
    return;
*/
    int n;
    if(front>rear){
        printf("Queue is Empty");
    }
    else{
        n = Queue[front];
        printf("Element %d is Deleted",n);
        front++;
    }
    return;
}


void Display(){

    int i;
/*
     if (front == -1 || front == rear +1 ){
        printf("Underflow\n");
    }
    else{
        for(index = front ; index<=rear; index++){
            printf(" %d | ",Queue[index]);
        }
    }
    return;
*/
    if (front>rear){
        printf("Queue is Empty");
    }
    else{
        printf("\n Queue Elements: \n");
        // for(i= rear; i>=front; i--){
        // for(i= front; i<=rear; i++){
        for(i= front; i!=rear; i++){
            printf("%d ",Queue[i]) ;
        }
        printf("%d ",Queue[i]) ;    
    }
    return;
}






// void insert(int Queue[],int *rear , int *front, int size){
//     if( *rear == size-1){
//         printf("Overflow\n");
//     }
//     if (*rear==-1 && *front==-1) { 
//         *rear+=1;
//         *front+=1;
//     }
//     else
//     {
//         *rear = *rear +1 ;
//         printf("Enter the element\n");
//         scanf("%d",&Queue[*rear]);
//     }
//     return;
// }


// void Delete(int queue[],int *rear, int *front){
//     int item;
//     if (*front ==-1 || *front == *rear +1 ){
//         printf("Underflow\n");
//     }
//     else{
//         item = queue[*front];
//         printf("Deleted Item is : %d\n",item);
//         *front =*front+1;
//     }
//     return;
// }

int main(){


    //int q[5]={0};

    //int rear = -1;
    //int front = -1;
    // int *rear = -1;
    // int *front = -1;
    // int *rear = -1;
    // int *front = -1;
   // int size ;
    // insert(q,-1,-1,5);
    // insert(q,&rear,&front,5);
   // Delete(q,&rear,&front);
    // Delete(q,-1,-1);

    int choice;
    do  {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                Delete();
                break;
            case 3:
                Display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }while(choice != 4);

    
   // insert();

    return 0;

}
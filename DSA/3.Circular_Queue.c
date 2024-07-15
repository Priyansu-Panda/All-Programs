#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int rear = -1;
int front = -1;
int Queue [SIZE];

void insert(){
/*
    int item;
    if(rear == SIZE-1 && front ==0 || front == rear+1){
        printf("Overflow\n");
    }
    else
    {
        printf("Enter the element\n");
        scanf("%d",&item);
        if (rear ==-1)
        {
            front++,rear++;
        }
        else if(rear ==SIZE-1){
            rear++;
        }
        else
        {
            rear++;
        }
        Queue[rear] = item;
    }
*/

    int n;

    if ((rear + 1 )%SIZE == front ){
        printf("QUEUE IS FULL\n");
    }
    else
    {
        printf("Enter the element\n");
        scanf("%d",&n); 

        if (rear == -1 && front == -1){
            rear =0;
            front = 0;
        }
        else
        {
            rear= (rear +1)%SIZE;
        }
        Queue[rear]= n ;
    }
}

void  Delete(){

/*
    int item;
    if(front==-1){
        printf("UnderFlow\n");
    }
    else{
        item = Queue[front];
        if (front==rear){
            front=-1;
            rear=-1;
        }
        else if (front==SIZE-1)
        {
            front =0;
        }
        else{
            front++;
        }
        printf("Delted item is %d ", Queue[front]);
    }
*/

    if (rear == -1 && front == -1){
        printf("Queue is Empty\n");
    }
    else{
        n= Queue[front];

        if (front == rear ){
            front =-1,rear =-1;
        }else
        {
            front = (front + 1 )%SIZE;      // front++;
        }
        printf("Element %d is removed ", n );
    }
    return;
}

void Display(){
/*
    int index;
    if(front==-1){
        printf("UnderFlow\n");
    }
    else{
            if (rear >= front){
                for(index = front ; index <=rear ;index++){
                    printf(" %d ", Queue[index]);
                }
            }
            else
            {
                for(index=front; index <SIZE; index++){   // front to end 
                    printf(" %d ", Queue[index]);
                }
                for(index=0; index <= rear; index++){   // 0 to rear 
                    printf(" %d ", Queue[index]);
                }
            }

    }
*/
    int i ;

    if (rear == -1 && front == -1){
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Elements of Quueue\n");
        for(i = front ; i != rear; i= (i+1)%SIZE){
            printf("%5d",Queue[i]);
        }
        printf("%5d\n",Queue[i]);
    }
}


int main(){


    int choice;
    while(1){
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
    }

    return 0;

}



#include<stdio.h>

#define MAXSIZE 10


int stack[MAXSIZE],top =-1;

void push (){
    int n ;
    if (top ==  MAXSIZE - 1) {
        printf("Stack is full \n");
    }
    else{
        printf("Enter the element to be pushed : ");
        scanf( "%d", &n);
        top = top + 1;   //top+=1
        stack[top]= n;
    }
}


void pop(){
    int n;
    if (top == -1){
        printf("Stack is empty");
    }
    else{
        n = stack[top];
        top--;
        printf("%d is popped\n", n);
    }
}

// void peek() {
//     int n;
//     if (top== -1 ) {
//         printf("Stack is empty \n");
//     }
//     else {
//         n=stack[top] ;
//         printf("Topmost element is %d \n", n );
//     }
// }

void display() {
    int i ;
    // for (i=n;i>=0;i++){
    for (i=top;i>=0;i++){
        printf("%d\n",stack[i]);        //Will print in reverse format
    }
}


void main(){
    int choice ;
    do {
        printf("-------STACK---------");
        printf("\n 1.Push\n 2.Pop \n 3.Display \n 4.Exit ");
        printf( "\nEnter your choice : " );
        scanf("%d",&choice);
        
        switch (choice) {
            case 1: push(); break ;
            case 2 : pop(); break;
            case 3: display(); break;
            case 4: exit(0); break;
            default:
                printf("Invalid choice\n");
       }
    }while (choice != 4);
}
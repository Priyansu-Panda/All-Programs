#include<stdio.h>

void swap(int* x, int* y){
    int temp ;
    temp=*x;
    *x =*y;
    *y=temp;
    return;
}

int main (){
    int  a = 69;
    int b =96;
    printf("The valur of a is now %d\n",a);
    printf("The valur of b is now %d\n",b);
    swap (&a,&b);
    printf("The valur of a is now %d\n",a);
    printf("The valur of b is now %d\n",b);

    return 0;
}
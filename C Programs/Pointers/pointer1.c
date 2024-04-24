#include<stdio.h>
int main (){

    // int * --> int ka address store karta hai 
    // int** --> int* ka address store karta hai

    int a = 25;
    int* x =&a;
//       OR
    // int* x =&a;
    // x =&a;

    // int* x =&a;
    // *x =&a;  // wrong

    *x=7;     //value oof a changes 

    int y =&a;

    printf("%d\n",a);

    printf("%d\n",&a);
    printf("%p\n",&a);
    printf(" x is %p\n",x);

    printf("y is%p\n",y);
    printf("y is %d\n",y);

    printf("%p\n",&x);

    printf("value of *x %d\n",*x);    // x ke andar jis bhi variable ka address store hai uska value print karo
    printf("add of *x%p\n",*x);


    int *m =&a;
    int **n = &m;
    int ***o= &n;
    printf("a %d\n",a);
    printf("*m %d\n",*m);
    printf("**n %d\n",**n);
    printf("***o %d\n",***o);
    printf("");
    printf("a %p\n",a);
    printf("*m %p\n",*m);
    printf("**n %p\n",**n);
    printf("***o %p\n",***o);

    printf("*m %d",*m);
    // printf("*n d  %d",*n);
    printf("*n p %p",*n);
    printf("**n %p\n",**n);
    printf("**n %d\n",**n);

char str[]=" COLLEGE WALLAH";
char* ptr = str;    //ptr---> stands for address
int i=0;
while (*ptr!="\0"){
    printf("%c",*ptr);    //q*ptr ---> fetches the value
    ptr++;
    i++;
}

char str1[] = "PHYSICS wallah";
char* ptr1 = &str1[0];
printf("%p",ptr);
printf("%p",&str1);
printf("%p",str1);

    return 0;
}


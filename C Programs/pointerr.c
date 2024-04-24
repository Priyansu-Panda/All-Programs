#include<stdio.h>
int main()
{
    int a = 69;
    int* x = &a ;
    printf("%p\n",a);
    printf("%d\n",a);
    printf("    ");
    printf("%p\n",&a);
    printf("%d\n",&a);
    printf("    ");
    printf("%p\n",x);
    printf("%d\n",x);
return 0;
}
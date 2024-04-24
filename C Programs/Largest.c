#include<stdio.h>
int main()
{
    printf("Enter How Mnay number\n ");
    int n;
    scanf("%d",&n);
    int max=0;
     int x;

    for (int i = 1; i<=n;i++){
        printf("ENTER THE VALUE OF N: ");
        scanf("%d",&x);
        if(max<x) max=x;

    }
    printf(" largest %d",max);


 return 0;
}
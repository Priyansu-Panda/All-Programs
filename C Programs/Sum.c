#include<stdio.h>
int main()
{
    int sum = 0,n;
    printf("Sum of n numbers \n");
    scanf("%d",&n);
    for (int i = n;i>0;i--){
         sum =sum +n;
         n--;
    }
    printf("%d",sum);
     
 return 0;
}
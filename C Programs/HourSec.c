#include<stdio.h>
int main()
{
    printf("ENTER THE TIME IN TOTAL\n");
    int t;
    scanf("%d",&t);
    int h = t/3600;
    int m = (t%3600)/60;
    int s =  (t%3600)%60;
    printf("%d hr %d min %d sec ", h,m,s);
 return 0;
}
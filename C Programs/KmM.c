#include<stdio.h>
int main()
{
 int d;
 printf("Converting into KM & M \n");
 scanf("%d",&d);
 int km = d/1000;
 int m = d%1000;
 printf("SO ur Distance is %d km and %d m",km,m);
 return 0;
}
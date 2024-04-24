#include<stdio.h>
int main()
{
    int d,y,m,da;
    printf("Enter the Table\n");
    scanf("%d",&d);
    y = d /365;
    d =d%365;
    m = d/30;
    da= (d%30);
    printf("%d %d %d ", y, m , da);

    return 0;
}
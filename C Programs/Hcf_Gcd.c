#include<stdio.h>

int min(int x,int y){
    // if (x<y) return x;
    // else
    // {
    //     return y;
    // }
        return (x < y) ? x : y;
}

int gcd(int* x, int* y ){
    int hcf =1 ;
    for(int i =min(*x,*y);i>=1;i--){
        if (*x%i==0 && *y%i==0){
            hcf =i;
            break;
        }
    }
    // for(int i =1;i<=min(*x,*y);i++){
    //     if (*x%i==0 && *y%i==0){
    //         hcf =i;
    //     }
    // }
    return hcf;
}

int main (){
    int a,b;
    printf ("Enter Tow numbers \n");
    scanf("%d %d",&a,&b);

    printf("The Gcd of %d & %d is %d",a,b,gcd(&a,&b));

    return 0;
}
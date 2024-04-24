#include<stdio.h>
int main(){
    int linecount=0,count=0;
    int a=2;
    while(count!=50){
        if(linecount==10){
            printf("\n");
            linecount=0;
        }
        int x=0;
        for(int j=2;j<a;j++){
            if(a%j==0) x++;

        }
        if(x==0){
            linecount++;
            count++;
            printf("%3d ",a);
        }
        a++;
    }
    return 0;
}
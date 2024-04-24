
#include<stdio.h>
int main(){

    for (int i=1;i<=100;i++){
      if(i==1) continue;
     int count=0;
      int a=1;

    for (int j=2;j<i;j++){
        if(i%j==0) count++;
    }
    if(count==0) printf("%4d",i);
}
    return 0;
}
#include<stdio.h>
int main(){
    int n;
  printf("enter a number:");
    scanf("%d",&n);
    //for(int i=100; i<=(100-3*n); i=(i-3)){
     //   printf("%d ",i);
   // }
   int a=100;
   for(int i=1; a>0; i++){
    printf("%d ",a);
    a=a-3;
   }

    return 0;
}
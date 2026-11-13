#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int sum=0;
   // for(int i=1; i<=n; i++){
     //   if(i%2!=0){
          //   sum=sum+i;
      //  }
      //  else 
      if(n%2==0){
        sum=-n/2;
      }
      else(n%2!=0){
        sum= -n/2 + n;
      }
    printf("sum is %d",sum);
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int sum=0;
    int LD=0;
    while(n!=0){
LD=n%10;
sum=sum+LD;
n=n/10;
    }
    printf("the sum of digit is %d",sum);
    return 0;
}
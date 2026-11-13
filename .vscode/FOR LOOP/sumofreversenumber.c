#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int sum=;
    //int LD=0;
    int r=0;
    while(n!=0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
//LD=n%10;
sum=sum+r;
n=n/10;

    }
    printf("the sum of a number is %d",sum);
    return 0;
}
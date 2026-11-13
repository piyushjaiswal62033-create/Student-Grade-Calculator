#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    //int sum=0;
    int r=0;
    while(n!=0){
    r=r*10;
    r=r+(n%10);
n=n/10;
    }
    printf("the Reverse of digit is %d",r);
    return 0;
}
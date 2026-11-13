#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact=fact*i;
    }
    return fact;
}
//int permutation(int n, int r){
    //int npr=(factorial(n)/factorial(n-r));
   // return npr;
//}
int main(){
    int n;
    printf("enter anumber");
    scanf("%d",&n);
    int r;
    printf("enter a number");
    scanf("%d",&r);
   int nfact=factorial(n);
   int nrfact=factorial(n-r);
   int npr=nfact/nrfact;
    for(int i=1; i<=n; i++){
        printf("%d\n",npr);
    }
    return 0;
}
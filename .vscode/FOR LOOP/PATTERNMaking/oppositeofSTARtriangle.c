#include<stdio.h>
int main(){
    int n=5;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(5-i); j++){
        printf("%d",j);
    }
    printf("\n");
}
return 0;
}
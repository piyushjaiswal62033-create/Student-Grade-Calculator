#include<stdio.h>
void england(){
    printf("you are in england\n");
    return;
}
void austrlia(){
    printf("you are in austrlia\n");
    england();
    return;
}
void india(){
    printf("you are in india\n");
    austrlia();
    return;                                                                                                                 
}
int main(){
india();
return 0;
}
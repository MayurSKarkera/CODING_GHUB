#include<stdio.h>
void greet(int n){
    if(n==0) return;
    printf("good morning\n");
    greet(n-1);
}
int main(){

    int n;
    printf("enter a number :");
    scanf("%d",&n);

    greet(n);
    return 0;
}
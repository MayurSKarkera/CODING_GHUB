#include<stdio.h>
#include<stdlib.h>
int main(){
    int a = sizeof(double);
    printf("%d",a);

    int* ptr = (int*) malloc(10*4);
    printf("%d\n",*ptr);
    return 0;
}
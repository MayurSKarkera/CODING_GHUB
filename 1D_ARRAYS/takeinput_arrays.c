#include<stdio.h>
int main(){

    int a[3];

    printf("enter first element :");
    scanf("%d",&a[0]);

    printf("enter second element :");
    scanf("%d",&a[1]);

    printf("enter third element :");
    scanf("%d",&a[2]);

    printf("the entered elements are :\n%d\n%d\n%d\n",a[0],a[1],a[2]);
    return 0;
}
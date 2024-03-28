#include<stdio.h>
int main(){

    int a;
    printf("enter first number :");
    scanf("%d",&a);

    char ch;
    printf("enter the operator :");
    scanf("%c",&ch);

    int b;
    printf("enter second number :");
    scanf("%d",&b);

    if(ch=='+')
        printf("addition of two numbers is :%d\n",a+b);

    if(ch=='-')
        printf("subtraction of two numbers is :%d\n",a-b);

    if(ch=='*')
        printf("multiplication of two numbers is :%d\n",a*b);

    if(ch=='/')
        printf("division of two numbers is :%d\n",(float)a/b);    


    return 0;
}
#include<stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
        hcf = i;
    }
}
int main(){
    int a;
    printf("enter first number :");
    scanf("%d",&a);

    int b;
    printf("enter second number :");
    scanf("%d",&b);

    int hcf = gcd(a,b);
    printf("the HCF/GCD of %d and %d is :%d",a,b,hcf);    return 0;
}
#include<stdio.h>
int main(){

    int a[5];

    for(int i=0;i<=4;i++){
        printf("enter %d element : ",i+1);
        scanf("%d",&a[i]);

    }

        printf("\n%d",a[1]);
    return 0;
}
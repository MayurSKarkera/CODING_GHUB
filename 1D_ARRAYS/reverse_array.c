#include<stdio.h>
int main(){

    int a[4];

    for(int i=0;i<=3;i++){
        printf("enter element number %d :",i);
        scanf("%d ",&a[i]);
    }
    printf("the elements in reverse order : ");

    for(int i=3;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}
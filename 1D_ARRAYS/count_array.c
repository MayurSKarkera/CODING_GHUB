#include<stdio.h>
int main(){

    int x;
    printf("enter a number :");
    scanf("%d",&x);

    int count = 0;

    int arr[5] = {1,2,3,4,5};

    for(int i=0;i<5;i++){
        if(arr[i]>0){
            count++;
        }
    }
    printf("the number of count :%d",count);
    return 0;
}
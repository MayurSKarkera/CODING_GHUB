#include<stdio.h>
int main(){

    int arr[5] = {1,2,3,4,5};
    printf("%d\n",arr[4]);
    arr[4] = 10;
    printf("%d",arr[4]);
    return 0;
}
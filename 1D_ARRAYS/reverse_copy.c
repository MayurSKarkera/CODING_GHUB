#include<stdio.h>
int main(){

    int arr[7] = {1,2,3,4,5,6,7};
    int brr[7];

    for(int i=0;i<=6;i++){
        brr[i] = arr[i];
    }

    for(int i=0;i<=6;i++){
        printf("%d ",brr[6-i]);
    }
    return 0;

}
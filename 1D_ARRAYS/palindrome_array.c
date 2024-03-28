#include<stdio.h>
int main(){

    int n;
    printf("enter the size of the array :");
    scanf("%d",&n);

    int arr[n];
    int brr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<=n-1;i++){
        brr[i] = arr[n-1-i];
    }

    if(arr[n]==brr[n]){
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
    return 0;
}
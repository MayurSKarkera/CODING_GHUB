#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array :");
    scanf("%d",&n);

    int arr[n];
    int brr[n];
     printf("enter the array elements :");
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
         brr[i] = arr[n-1-i];
    }
     printf("the array in reverse : ");
    for(int i=0;i<=n-1;i++){
       printf("%d ",brr[i]);
    }
    return 0;
}
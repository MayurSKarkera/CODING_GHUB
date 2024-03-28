#include<stdio.h>
int main(){

    int n;
    printf("enter the size of the array :");
    scanf("%d",&n);

    int arr[n];
    int x;
    printf("enter the elements :");
    

    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }

     printf("enter the element to be searched :");
    scanf("%d",&x);

    for(int i=0;i<=n-1;i++){
        if(arr[i]==x){
            printf("element found at position %d",i+1);
        }
         else{
        printf("element not found\n");
        break;
    }
    }
   
    return 0;
}
#include<stdio.h>
int main(){

    int arr[7] = {1,2,3,4,5,6,7};

    int sum_even = 0;
    int sum_odd = 0;
    

    for(int i=0;i<=6;i++){
        if(i%2==0){
        sum_even = sum_even + arr[i];
        }
    else{
        sum_odd = sum_odd + arr[i];
    }
    }
    printf("the difference between even and odd is :%d",sum_even-sum_odd);

    

    return 0;
}
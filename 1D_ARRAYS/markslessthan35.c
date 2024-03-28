#include<stdio.h>
int main(){

    int marks[6];

    for(int i=0;i<5;i++){
        printf("enter marks of %d student : ",i+1);
        scanf("%d",&marks[i]);
    }

    for(int j=0;j<5;j++){
        if(marks[j]<35){
            printf("the %dth student has scored marks less than 35 \n",j+1);
        }
    }
    return 0;
}
#include<stdio.h>
int main(){

    int r;
    printf("enter the number of rows :");
    scanf("%d",&r);

    int c;
    printf("enter the number of columns :");
    scanf("%d",&c);

    int a[r][c],b[r][c];

    printf("enter the elements :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d ",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int sum = 0;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum = sum + a[i][j];
        }
    }

    printf("the sum of all elements of the matrix :%d",sum);


    return 0;
}
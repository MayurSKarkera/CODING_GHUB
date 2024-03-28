#include<stdio.h>
int main(){

    int r,c;
    int a[r][c];
    printf("enter the number of rows :");
    scanf("%d",&r);

    printf("enter the number of columns :");
    scanf("%d",&c);

    printf("enter the elements of the matrix :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",a[i][j]);
        }
    }

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",a[j][i]);
        }
    }
    return 0;
}
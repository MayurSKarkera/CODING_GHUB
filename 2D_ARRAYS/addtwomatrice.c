#include<stdio.h>
int main(){
    int r,c;
    int a[r][c];
    int b[r][c];

    printf("enter the number of rows :");
    scanf("%d",&r);

     printf("enter the number of columns :");
    scanf("%d",&c);

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
    }
    return 0;
}
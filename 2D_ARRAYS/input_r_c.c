#include<stdio.h>
int main(){

    int m,n;
    printf("enter the number of rows :");
    scanf("%d",&m);

    printf("enter the number of columns :");
    scanf("%d",&n);

    int a[m][n];

    printf("enter the elements :");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int m;
    printf("enter the number of rows of the matrix :\n");
    scanf("%d",&m);
    int n;
    printf("enter the number of columns of the matrix :\n");
    scanf("%d",&n);
    int a[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    //wave printing
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        else{
            for(int j=n-1;j>=0;j--){
                printf("%d ",a[i][j]);
            }
             printf("\n");
        }
    }
    return 0;
}
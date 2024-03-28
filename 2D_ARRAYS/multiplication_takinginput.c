#include<stdio.h>
int main(){
    int m;
    printf("enter the number of rows for matrix A :\n");
    scanf("%d",&m);
    int n;
    printf("enter the number of columns for matrix A :\n");
    scanf("%d",&n);
    int a[m][n];
    printf("enter the elements of matrix A :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int p;
    printf("enter the number of rows for matrix B :\n");
    scanf("%d",&m);
    int q;
    printf("enter the number of columns for matrix B :\n");
    scanf("%d",&q);
    int b[p][q];
      printf("enter the elements of matrix B :\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }

    if(n!=p){
        printf("matrix multiplication not possible");
    }
    else{
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                for(int k=0;k<n;k++){
                    res[i][j] = res[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        
    printf("the resultant matrix is :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d",res[i][j]);
        }
        printf("\n");
    }
    }



    return 0;
}
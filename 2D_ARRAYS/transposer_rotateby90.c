#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows/columns :");
    scanf("%d",&n);

    int a[n][n];
    printf("enter the elements :\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
        
    }
    printf("\n");
    printf("the transpose of the given matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("the matrix rotated by 90 degree is :\n");
    for(int i=0;i<n;i++){
        int j = 0;
        int k = n - 1;
        while(j<k){
            int temp = a[i][j];
            a[i][j] = a[i][k];
            a[i][k] = temp;
            j++;
            k--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
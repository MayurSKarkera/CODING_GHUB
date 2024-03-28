#include<stdio.h>
int main(){

    int a[3][4] = {{1,0,0,1},{1,1,0,0},{1,0,0,0}};
    int maxcount = 0;
    int maxid;

    for(int i=0;i<3;i++){
        int count = 0;
        for(int j=0;j<4;j++){
            if(a[i][j]==0) count++;

        }
        if(count>maxcount) 
        maxcount = count;
        maxid = i;
    }
    printf("the maximum number of 0's are :%d\n",maxcount);
    printf("the %dth row has maximum 0's ",maxid);

    return 0;
}
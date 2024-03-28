#include<stdio.h>
int main(){
    // FILE* ptr = fopen("mayur.txt","r");
    // char str[100];
    // while(fgets(str,100,ptr)!=NULL)
    //     printf("%s",str);


    FILE* ptr1 = fopen("CW.txt","w");
    char str1[] = "new beginning";
    fputs(str1,ptr1);
    fclose(ptr1);
    return 0;
}
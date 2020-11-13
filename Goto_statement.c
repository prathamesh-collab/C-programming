#include<stdio.h>

int main()
{
    lable1:
        printf("We are inside the lable 1");
        goto end;   
    printf("Hrllo world ");
    goto lable1;
    end:
    printf("We are at end ");


}  

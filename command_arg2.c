#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int num1;
    int num2;
    
   
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    printf("name of file is %s\n",argv[0]);

    printf("sum of %d + %d = %d\n", num1 ,num2 , num1 + num2);

    
    return 0;
}

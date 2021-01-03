#include <stdio.h>
//#include <stdlib.h>
int main()
{   


    FILE *ptr = NULL;
    char string[35];
    ptr = fopen("myfile.txt","r") ;
    fscanf(ptr,"%s",string);
    printf("the content of this file has %s\n",string);
 
  

    return 0;
}
#include <stdio.h>
//#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[65] = "This was best tut by pratham";
    ptr = fopen("myfile.txt","a");
    fprintf(ptr,"%s",string);

    
    return 0;
}
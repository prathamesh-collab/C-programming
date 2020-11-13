#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile1.txt","w");
    fputc('o',ptr);               // print charecter in file 
    fputs("this is pratham",ptr);



    return 0;
}
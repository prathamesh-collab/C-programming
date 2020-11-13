#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","r");
    char str[5];
    fgets(str, 3 ,ptr);
    printf("the string is :%s\n",str);



    return 0;
}
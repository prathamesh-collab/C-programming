#include<stdio.h>
#include<string.h>

int main()
{
    char a[15];
    int length;
    printf("Enter a string to calculate:- \n");
    scanf("%s",a);
    length = strlen(a);
    printf("Length of the string =%d\n",length);

    
    return 0;
}
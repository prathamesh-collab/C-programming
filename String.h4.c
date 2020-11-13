#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20]="prathamesh";
    char s2[20]= "prathamesh";
    if (strcmp(s1,s2)==0)
    {
        printf("String1 and string 2 are equal" );

    }else
    {
        printf("String1 and string2 are different");

    }
    
    
    return 0;
}
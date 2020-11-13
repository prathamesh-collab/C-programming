#include<stdio.h>
int main()
{
    int a = 35;
    int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("The adress of a is :-%d\n",*ptr);
    }
    else

    {
        printf("The pointr is a null pointer and can not be dereferanced");

    }

    

    return 0;
}
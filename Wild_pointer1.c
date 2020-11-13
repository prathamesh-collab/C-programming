#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 435;
    int *ptr;               //This is a  Wild Pointer 
    ptr = &a ;               // Ptr is no longer a Wild pointer coz now its point to the address of variable a 
    printf("The value of a is :- %d\t",*ptr);

    return 0;
}
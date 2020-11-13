#include <stdio.h>
int main()
{
    char a = '3';
    char* ptr = &a;
    printf("%d\n",ptr);
    printf("%d",ptr-2);

    return 0;
}
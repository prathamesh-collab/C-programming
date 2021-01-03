#include <stdio.h>

int main()

{
    int a = 25;
    int *ptr = &a;

    printf("Address of a is %p\n",&a);
    printf("Address of a is %p\n",ptr);
    printf("the value of a is %d\n",a);
    printf("the value of a using dereferncing %d\n",*ptr);

    
    return 0;
}
#include <stdio.h>

int muf()
{
    static int a;
    a++;

    printf("the valu of a is :- %d\n",a);

}


int main()
{
    register int a = muf();
    a = muf();
    a = muf();
    a = muf();
    

    
    return 0;
}
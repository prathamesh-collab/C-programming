#include <stdio.h>
#include <stdlib.h>
int a(int a)
{
    return a;


}
int main()
{
    int (*pointr) (int );
    pointr = &a;
    int b = (*pointr)(10);
    printf("The value of function pointer  is %d\n",b);


    
    return 0;
}
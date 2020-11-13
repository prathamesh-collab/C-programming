#include <stdio.h>
int myfun()
{
    static int  a;
    a++;
    printf("The a is %d\n",a);

}
int main()
{
    
    int a = myfun();
    a = myfun();
    a = myfun();
    




    return 0;
}
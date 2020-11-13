#include<stdio.h>

int myfun()
{
   // int a = 50; // tjis is local variable of myfunc;
    extern int a ;          // this is exter variable .. externn keyword is used to tell the compiler to take variable from outside
    
    return a;

}
int a = 555;


int main()

{
    printf("value of a is :-%d",myfun());

    return 0;
}
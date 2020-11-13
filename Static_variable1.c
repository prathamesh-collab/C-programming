#include<stdio.h>

int func1(int b1)
{
    static int myvar;
    printf("The value of myvar is %d\n",myvar);
    myvar ++ ;

    
    
}
int main()
{

    int b ;

    int val = func1(b);
    val = func1(b);
    val = func1(b);

    return 0;
}
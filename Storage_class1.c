#include<stdio.h>
int sum;
int func(int a , int b)
{
    //auto int sum; 
    sum = a +b;
    return sum;


}

int main()

{
    printf("Sum is %d\n",func(5,5));



    
    return 0;
}
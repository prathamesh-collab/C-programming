#include <stdio.h>

int sum(int a , int b)
{
    return a + b;

}
void geet()
{
    printf("Hello world my user good morning\n");     




}

int main()
{

    printf("The sum of 1 and 2 is %d\n",sum(1,2) );            // // testing the function 
    int (*fptr) (int , int );          // Declaring a function pointer here 
    fptr = &sum;                  // creating afunction pointer 
    int d = (*fptr)(5,5);          // Dereferencing a function pointer 
    printf("The value of d is :- %d\n",d);
    



    
    return 0;
}

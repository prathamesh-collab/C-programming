#include<stdio.h>
int main()
{
    int a = 76;
    int* ptr = &a;
    int* ptr2 = NULL;
    printf("The adress of ponter ptr is %p\n",&ptr);        // adresss pf ptr variable 
    printf("The adrees of a is %p\n ",&a);                  // adress of variable a
    printf("The adress of ptr2 is %p\n",ptr2);
    printf("The adrees of a is %p\n",ptr);                  // adress of a which is stored in pointer ptr 
    printf("The value of a is %d\n",a);                    // value of a
    printf("the value of a is %d",*ptr);                   // value of a 







  
}

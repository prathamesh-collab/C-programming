/* malloc():
 malloc stands for memory allocation.
  As can be guessed by its name, it requests memory from the heap and returns a pointer to the memory. 
  The pointer is of the void type, so that we can typecast it for any variables. 
  All the values at the allocation time are initialized to garbage values. 
  Its syntax is simple as we have to provide the memory space along with the size we want in bytes. 

Syntax:
ptr = (ptr-type*) malloc(size_in_bytes)
For example:

int *ptr;
ptr = (int*) malloc (3* sizeof(int)
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d",&n);

    ptr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d",&ptr[i]);

    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of this array is %d\n",i,ptr[i]);
        
    }
    

    return 0;
}
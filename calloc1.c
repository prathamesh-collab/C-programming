#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;

    printf("Enter the size of arayy you want to create\n");
    scanf("%d",&n);
    ptr = (int*) calloc (n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d elemet in the array\n",i);
        scanf("%d",&ptr[i]);

    }
    for (int i = 0; i < n; i++)

    {
        printf("the value at %d index is %d\n",i,ptr[i]);

    
    }
    // ======================use of realloc======================//
    printf("Enter the size of new array you want to create \n");
    scanf("%d",&n);
    ptr=(int *)realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d od this array\n",i);
        scanf("%d",&ptr[i]);

    }
    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of theis array is %d\n",i,ptr[i]);

    }
    
    free(ptr);
    
    
    

    return 0;
}
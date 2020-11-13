#include<stdio.h>
#include<stdlib.h>
void func1()
{
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d index\n",i);
        scanf("%d",&ptr[i]);

    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d element of the array is %d\n",i,ptr[i]);

    }
    
    
}
int func2(int *ptr)
{
    free(ptr);
    printf("Sucessfully free dynamic memory");


}
int main()
{
    
    printf("1:-create array with dynamic memory\n");
    printf("2:-free memory\n");
    int c;
    printf("Enter your choice here\n");
    scanf("%d",&c);
    if (c==1)
    {
        func1();

    }
    else if (c == 2)
    {
        func2;
        
    }
    else
    {
        printf("Wrong input");

    }
    
    
   
    
}
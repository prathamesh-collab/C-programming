
#include<stdio.h>

int func1(int array[])
{
    for (int i = 0;i < 4; i++)
    {
        printf(" The value at %d is %d\n",i,array[i]); 
    }
    array[0] = 325; //very important point that if you change your any value here it gets reflected in main()
    
}

int main()
{   
    int arr[] = {23,13,3,4};
    printf("The value at index 0 is %d\n",arr[0]);

    func1(arr);
    printf("After changing value in void function\n ");
    
    printf("The value at index 0 is %d", arr[0]);

    
    return 0;
}
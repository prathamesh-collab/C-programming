#include <stdio.h>
void func(int* ptr)
{
    for (int i = 0; i <4; i++)
    {
        printf("The value at %d is %d\n " , i , *(ptr+i));
    }
    *(ptr + 2)=653;
    
}
int main()
{
    int arr[]={12,14,16,18};
    func(arr);
    printf("The value at index 0 is %d",arr[0]);
    func(arr);
  
     

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void display(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);

    }
    
}
int main()
{
    int arr[20] = {2,4,6,8};
    display(arr,4);

    

    return 0;
}
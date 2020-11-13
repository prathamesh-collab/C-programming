#include<stdio.h>
int main()
{
    int i=0;
    int a;
    printf("Enter numbere here:-\n ");
    scanf("%d",&a);
    while (i < 10)
    {
        i = i+1;
        printf("%d * %d = %d\n",a ,i, a * i);
       
    }
    
}
#include<stdio.h>
int main()
{
    int i=0;
    int a;
    printf("Enter number here\n");
    scanf("%d",&a);
  

    do
    {
        i = i +1;
        printf("%d * %d = %d\n",a ,i ,a*i );
    } while (i<10);
    
}

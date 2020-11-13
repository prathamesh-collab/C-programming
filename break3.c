#include<stdio.h>
int main()
{
    int i,num=0;
    printf(":Enetr your num here:-\n ");
    scanf("%d",&i);
    do
    {
        printf("%d\n",num);
        num = num + 1;
        if (num ==6)
        {
      
            break ; 

        }
  

    } while (num < i);
    

}
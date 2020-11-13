#include<stdio.h>
int main()
{
    int num;
    for ( int i = 0; i < 10; i++)
    {
        printf("%d\n",i);
        for (int j=0 ; j < 10; j++)
        {
            printf("Enter the number\n 2:-Enter 0 to exit");
            scanf("%d",&num);
            if(num==0){
                goto end;
            }
        }
        
    }
    end: 
return 0;
}



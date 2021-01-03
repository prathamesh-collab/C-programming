#include <stdio.h>

int main()
{
    int i = 1; 
    int n;

    int sum = 0;
// *************************************using for loop here**************************
    /*
    printf("Enter a positive integere :- ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i ;
       


    }
    printf("sum =%d",sum);
    return 0;
    */

   // *****************************wsung while lopp here **********************************
   /*
    while (i<=n)
    {
       
       sum = sum + i;
       i++;


    }
    printf("Sum = %d",sum);
    return 0;

}

*/
 //  *****************************using do-while loop********************************
    printf("Enter positive number here:-");
    scanf("%d",&n);
    do
    {
        
        sum = sum + i;
        i++;

    } while (i<=n);

    printf("Sum = %d",sum);

    return 0;
}


 
       


  
   

    



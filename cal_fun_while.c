#include<stdio.h>
int add(int num1 ,int  num2)
{
    return num1 + num2;


}
int sub(int num1 , int num2 )
{
    return num1 - num2;

}
int mul(int num1 ,int num2)
{
    return num1 * num2;

}
int main()
{
    int loop = 0;
    int a , b;
    int c;
    while (loop==0)
    {
        /* code */
    
    
        printf("***********Welcome to calculator*************");
        printf("1:-Addition\n");
        printf("2:-subtraction\n");
        printf("3:-multiplication\n");
        printf("4:-QUIT\n");
        printf("Enter you choise\n : 1/2/3\n");
        scanf("%d",&c);
        printf("Enter 1st number here :-\n ");
        scanf("%d",&a);
        printf("Enter 2nd number here \n");
        scanf("%d",&b);
        if (c==1)
        {
            int r = add(a,b);
            printf("%d + %d= %d\n",a,b,r);
        }
        else if (c == 2)
        {
            int f = sub(a,b);
            printf("%d - %d = %d\n",a,b,f);

        }
        else if (c == 3)
        {
            int g = mul(a,b);
            printf("%d X %d = %d\n",a,b,g);


        }
        else if (c==4)
        {
            loop = 1;
        }
        else
        {
            printf("You enter wrong input ");

        }
        
        
    }
  
        
}
    



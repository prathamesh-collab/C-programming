#include<stdio.h>
int add(int num1, int num2)
{
    return num1 + num2;

}
int sub(int num1 , int num2)
{
    return num1 - num2;

}
int mul(int num1 ,int  num2)
{
    return num1 * num2;
}
int main()
{
    printf("Welcome to my calculator ");
    int a , b , c;
    printf("1:-Addition\n");
    printf("2:-Subtraction\n");
    printf("3:- multiplication\n");
    printf("Enter 1st number \n");
    scanf("%d",&a);
    printf("Enter 2nd number here\n :- ");
    scanf("%d",&b);
    printf("Enter your choice here\n :-");
    scanf("%d",&c);
    if (c==1)
    {
        int r = add(a,b);
        printf("%d + %d = %d\n",a,b,r); 
    }   
    else if (c==2)
    {
        int f = sub(a,b);
        printf("%d - %d = %d\n",a,b,f);

    }
    else if (c==3)
    {
        int g = mul(a,b);
        printf("%d X %d = %d\n",a,b,g);
    }
    else
    {
        printf("OPPS! you enter wrong choice");

    }
    

    
    
        
    
    
     
}

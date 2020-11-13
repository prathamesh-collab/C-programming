#include<stdio.h>
int main()
{
    printf("***************welcome to my calculator************ \n");
    int c , a , b;
    printf("1:-Addition\n");
    printf("2:- Subtraction\n");

    printf("3 :- Multiplication \n");
    printf("Enter your choice here :-\n");
    scanf("%d",&c);
    printf("Enter 1st numbere :-\n");
    scanf("%d", &a);
    printf("Enter 2nd number here :- \n");
    scanf("%d" , &b);
    switch (c)
    {
    case 1:
        printf("%d + %d = %d\n", a , b , a + b);
        break;
    case 2:
        printf("%d - %d = %d\n ",a ,b , a - b );
        break;
    case 3:
        printf("%d * %d = %d\n",a , b ,a * b);
        break;
    default:
        printf("you enter wrong input");
        break;
    }


        
    }



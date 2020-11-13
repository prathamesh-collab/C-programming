#include<stdio.h>
int main()
{
    int age , marks;
    printf("Enter your age here :- \n");
    scanf("%d" , &age);
    printf("Enter your marks :- \n");
    scanf("%d" , &marks);

    switch (age)
    {
    case 12:


        printf("your age is 12 \n");
        switch (marks)
        {
        case 50:
            printf("your marks is 50 ");
            break;
        
        default:
            printf("your maks are not 50 ");

            break;
        }
        
        break;
    case 15:
       printf("your age is 15");
       break;

    case 22:
        printf("your age is 22 ");
        break;


    default:
        printf("no match found ");


        break;
    }
}

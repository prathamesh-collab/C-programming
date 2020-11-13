#include <stdio.h>
int main()

{
    int a;
    printf("Enter you age for account renewal :- \n");
    scanf("%d" , &a );
    printf("you enter your age is %d\n " , a );
    if (a>=18){
        printf("you are eligible to create your accounct ");


    }
    else if (a>10){
        printf("OOPS! under 18 but you can create minor account");

    }
    else
    {
        printf("You are not allow yet to create you account yet ");

     
    }
    
    
    

}
#include<stdio.h>

int facto(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else{
        return (number * facto(number - 1));

    }
}
int main()


{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("the factorial of %d is %d\n", num , facto(num));
    return 0;

}


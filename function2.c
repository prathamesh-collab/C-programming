#include<stdio.h>
int add(int num1 ,int num2)
{
    return num1+num2;
}

int main()
{
    int a,b,c;

    printf("Enter 1st num\n");
    scanf("%d",&a);
    printf("Enter 2nd num");
    scanf("%d",&b);
    c = add(a,b);
    printf("%d + %d = %d\n",a,b,c);


}  

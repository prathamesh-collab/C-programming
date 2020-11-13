#include<stdio.h>
int takeint()
{
    int s;
    printf("Enter your number here ");
    scanf("%d",&s);
    printf("You enter %d\n",s);
    return s;

}
int main()
{
    takeint();
}
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b , sum=0;
    if (argc != 3){
        printf("you have forgot to type number");
        return -1;


    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    sum = a+ b;

    printf("the sum of %d ,%d is :-%d\n",a,b,sum);
  

    return 0;
}

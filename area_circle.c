#include <stdio.h>
#include <stdlib.h>

int sum(int r ){
    float area ;
    float pi=3.14;


    area = pi * r * r;
    return area;

 
}



int main()
{
    int a ;

    printf("Enter the radius of circle \n");
    scanf("%d",&a);
    int (*ptr)(int);
    ptr = &sum;
    float d = (*ptr)(a);
    printf("the area of circle is %f\n",d);

    return 0;
}
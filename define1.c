#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define SQUARE(r) r * r


int main()


{
    int r = 4;

    float var = PI;
    printf("The value of PI is:-%f \n",var);
    printf("The area of circle is :-%f\n", PI * SQUARE(r));

    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genraterandom(int n)
{
    srand(time(NULL));
    return rand() % n;
}


int main()
{
    printf("The random number between 0 to 5 is:- %d\n",genraterandom(2));
    
    
    return 0;
}
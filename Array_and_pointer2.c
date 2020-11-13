#include<stdio.h>
int main()
{
    int cha[] = {100,255,365,495,590};
    printf(" The value of arry at 1 position %d:-\n",cha[0]);
    printf("The adress of first elemet of the array is :- %d\n",&cha[0]);
    printf("The adress of first elemet of the array is :- %d\n", cha);
    printf("The adress of second element of the array is %d\n",&cha[1]);
    printf("the address of second element of the array is %d\n",cha + 1);
    printf("********************value *****************\n");

     
    printf("The Value at adress of first elemet of the array is :- %d\n",*(&cha[0]));
    printf("The Value at adress of first elemet of the array is :- %d\n", *(cha));
    printf("The Value at  adress of second element of the array is %d\n",*(&cha[1]));
    printf("the Value at  address of second element of the array is %d\n",*(cha + 1));
    printf("********************Array list*******************\n" );
    for (int i = 0; i < 5; i++)
    {
        printf("Element in %d position is %d\n",i,cha[i]);
        

    }
    

    
    
    return 0;

}
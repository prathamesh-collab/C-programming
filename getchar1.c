#include<stdio.h>
#include<stdlib.h>

int main()
{
    int chars,i=0;
    char *ptr;
    while (i<3)
    {
        char a ,b;

        printf("Employee %d : Enter the number of charecter in your Employee Id\n",i+1);
        scanf("%d",&chars);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c",&a);
        getchar();

        printf("Enter the value of b\n");
        scanf("%c",&b);
        getchar();
        

        ptr = (char *) malloc ((chars+1)*sizeof(char));
        printf("Enter the Empolyee Id\n");
        scanf("%s",ptr);

        printf("Your Employee ID is %s\n",ptr);
        free(ptr);
        i = i + 1;

    }
    
    
    return 0;
}
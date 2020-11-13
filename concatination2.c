#include<stdio.h>
#include<string.h>

int main()
{
    char s1[10];
    char s2[10];
    
    printf("Enter 1st string here :-\n");
    scanf("%s",s1);
    printf("Enter 2nd string \n");
    scanf("%s",s2);
    strcat(s1 , s2);
    printf("name is %s\n",s1);




   



    
    return 0;
}
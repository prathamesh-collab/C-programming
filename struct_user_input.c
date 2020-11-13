#include<stdio.h>
struct driver
{
    int licensno;
    char name[50];
    int Km;

};




int main()
{
    struct driver d1,d2,d3;
    int p = d1.licensno;
    
    int s = d1.Km;
    printf("Enter your licens number :-\n");
    scanf("%d",&p);
    printf("Enter Km:-\n");
    scanf("%d",&s);
    printf("Enter name of driver\n");
    scanf("%s",d1.name);

    printf("your licens number is %d\n",p);
    printf("your passing  km is %d\n",s);
    printf("Driver name is %s\n",d1.name);


   
      
    return 0;
}
#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[100];
};
/*
struct student pratham, rohit, tanu; // global variable 
void func()
{
    pratham.marks=50;            // we can access global variable outside also 
    
    

} 
*/ 
int main()

{
    struct student pratham, rohit, tanu;           // local variable 
    pratham.id=1;
    rohit.id=2;
    tanu.id=3;
    pratham.marks=499;
    tanu.marks=350;
    rohit.marks=250;
    pratham.fav_char='r';
    rohit.fav_char='p';
    tanu.fav_char='s';
    strcpy(pratham.name,"harry potter");
    





    

    printf("pratham got %d marks out of 500\n",pratham.marks);
    printf("pratham name is: %s\n",pratham.name);
    return 0;

}
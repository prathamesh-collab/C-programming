#include <stdio.h>
typedef struct student
{
    int id;
    int marks;

}std;


int main()
{
    
    std s1 ,s2;
    s1.id=1;
    s2.id=2;
    printf("id of s1 %d is\n",s1.id);
    printf("id of s2 is %d\n",s2.id);
    

    return 0;
}
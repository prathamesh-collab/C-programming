#include<stdio.h>
#include<string.h>
union book
{
    int pages;
    float price;
    char title[20];

};


int main()
{
    union book b1;
    b1.pages = 100;
    printf("pages: %d\n",b1.pages);
    b1.price=25.2;
    printf("price : %.1f\n",b1.price);
    strcpy(b1.title,"Cprogramming");
    printf("Title: %s\n",b1.title);
    
    

    
    return 0;
}
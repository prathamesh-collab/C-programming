#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genraterandom(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }
    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("Welcome to my game ");
    for (int i = 0; i < 3; i++)
    {
        int playerscore = 0, compscore = 0;
        char playerchar, compchar;
        int temp;
        char dict[] = {'r', 'p', 's'};

        printf("Plyer 1's turn");
        printf("1:-Rock:-\n2:-paper:-\n3:-Sicssor");
        scanf("%d", &temp);
        playerchar = dict[temp - 1];
        printf("you chose %s\n\n",playerchar);


        printf("computers turn");
        printf("1:-Rock:-\n2:-paper:-\n3:-Sicssor");
        temp = genraterandom(3) + 1;
        compchar = dict[temp - 1];
        printf("CPU chose %c\n",compchar);

        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
        }
        else
        {
            playerscore += 1;
            /* code */
        }
    }
    
    


    return 0;
}
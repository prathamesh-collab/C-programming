#include <stdio.h>
int main()
{
    int r[2][4] = {{1, 2, 3, 4}, {11, 12, 13, 14}}; //2 Dimension array
    for (int i = 0; i < 4; i++)

    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d,%d elemetn of the array is %d\n", i, j, r[i][j]);
        }
    }
}
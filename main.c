#include <stdio.h>
#include "my_mat.h"
int mat[10][10];

int main()
{
    char input;
    while (scanf("%c ", &input) != EOF)
    {
        if (input == 'A')
        {
            buildMatrix();
        }
        else if (input == 'B')
        {
            int i, j;
            scanf("%d %d", &i, &j);
            ifTherePath(i, j);
        }
        else if (input == 'C')
        {
            int i, j;
            scanf("%d %d", &i, &j);
            path(i, j);
        }
        else if (input == 'D')
        {
            break;
        }
    }
    return 0;
}
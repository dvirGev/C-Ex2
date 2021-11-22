#include <stdio.h>
#define size 10
#define intMax 1000

int mat[size][size];
int matPath[size][size];
void findShortestPath() {
    for (int k = 0; k < size; k++)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (i != j && matPath[i][k] + matPath[k][j] < matPath[i][j])
                    matPath[i][j] = matPath[i][k] + matPath[k][j];
            }
        }
    } 
}
//when press 'A'
void buildMatrix()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &mat[i][j]);
            matPath[i][j] = (mat[i][j]==0)? intMax: mat[i][j];
        }
    }
    findShortestPath();
}
//when press 'B'
void ifTherePath(int i, int j) {
    if (matPath[i][j] == intMax)
    {
        printf("False\n");
    }
    else {
        printf("True\n");
    }
}
//when press 'C'
void path(int i, int j) {
    if (matPath[i][j] == intMax)
    {
        printf("-1\n");
    }
    else {
        printf("%d\n", matPath[i][j]);
    }
}

void printMat(){
    for (int i = 0; i < size; i++)
    {
        printf("[ ");
        for (int j = 0; j < size; j++)
        {
            printf("%d, ", mat[i][j]);
        }
        printf("]\n");
    }
}
//for me :)
void printMatPath(){
    for (int i = 0; i < size; i++)
    {
        printf("[ ");
        for (int j = 0; j < size; j++)
        {
            printf("%d, ", matPath[i][j]);
        }
        printf("]\n");
    }
}
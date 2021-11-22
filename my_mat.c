#include <stdio.h>
#define size 10
#define intMax 500

int mat[size][size];
int matPath[size][size];
void findShortestPath() {
    for (int k = 0; k < size; k++)
    {
        // Pick all vertices as source one by one
        for (int i = 0; i < size; i++)
        {
            // Pick all vertices as destination for the
            // above picked source
            for (int j = 0; j < size; j++)
            {
                // If vertex k is on the shortest path from
                // i to j, then update the value of dist[i][j]
                if (matPath[i][k] + matPath[k][j] < matPath[i][j] && i != j)
                    matPath[i][j] = matPath[i][k] + matPath[k][j];
            }
        }
    } 
}
//when press 'A'
void buildMatrix()
{
    //int mat[size][size];
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
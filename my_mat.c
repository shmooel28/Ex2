#include <stdio.h>
#include "my_mat.h"
#define TRUE 1
#define FALSE 0
#define N 10
#define MAX 20000000

void receivingMat(int mat[][N])
{
    //int mat[N][N];
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}
int checkAdjacent(int mat[][N])
{
    int i, j;
    scanf("%d%d", &i, &j);
    if (mat[i][j] == 0)
        printf("False");
    else
        printf("True");
    return 1;
}
int shortPath(int mat[][N])
{
    int dist[N][N];
    int s,t;
    for (s = 0; s < N; s++)
    {
        for (t = 0; t < N; t++)
        {
            if (s==t) 
            {
                dist[s][t] = 0;
            }
            else
                if (mat[s][t]==0)
                {
                    dist[s][t] = MAX;
                }
                else
                    dist[s][t] = mat[s][t];
        }
    }
    int i, j;
    scanf("%d%d", &i, &j);
    int l, k, g;
    for (k = 0; k < N; k++)
    {
        for (l = 0; l < N; l++)
        {
            for (g = 0; g < N; g++)
            {
                if (dist[l][g] > dist[l][k]+dist[k][g])
                    dist[l][g] = dist[l][k]+dist[k][g];
            }
        }
    }
    if (dist[i][j]==0||i==j)
    {
        return -1;
    }
    
    return dist[i][j];
}

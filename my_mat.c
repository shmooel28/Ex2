#include <stdio.h>
#include "my_mat.h"
#define N 10
#define MAX 20000000

int receivingMat(int mat[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    return 1;
}
int checkAdjacent(int mat[][N])
{
    int dist[N][N];
    path_len(dist,mat);
    int i, j;
    scanf("%d%d", &i, &j);
    if (dist[i][j] == MAX || i==j)
        printf("False\n");
    else
        printf("True\n");
    return 1;
}
int shortPath(int mat[][N])
{
    int dist[N][N];
    path_len(dist,mat);
    int i, j;
    scanf("%d%d", &i, &j);
    if (dist[i][j]==MAX||i==j)
    {
        printf("-1\n");
    }
    else{printf("%d\n",dist[i][j]);}
    return 1;
}
int path_len(int dist[][N], int mat[][N])
{
    int i,j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i==j) 
            {
                dist[i][j] = 0;
            }
            else
                if (mat[i][j]==0)
                {
                    dist[i][j] = MAX;
                }
                else
                    dist[i][j] = mat[i][j];
        }
    }
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
    return 1;
}
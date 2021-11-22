#include<stdio.h>
#include "my_mat.h"
#define N 10
int main()
{
    int mat[N][N];
    char c;
    scanf("%c",&c);
    while (c != 'D')
    {
        if (c == 'A')
        {
            receivingMat(mat);
        }
        if (c == 'B')
        {
            checkAdjacent(mat);
        }
        if (c == 'C')
        {
            shortPath(mat);
        }
        scanf("%c",&c);
        
    }
    
}
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
            printf("A");
        }
        if (c == 'B')
        {
            printf("B");
            checkAdjacent(mat);
        }
        if (c == 'C')
        {
            printf("C");
            shortPath(mat);
        }
        scanf("%c",&c);
        
    }
    
}
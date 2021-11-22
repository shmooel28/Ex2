#include<stdio.h>
#include "my_mat.h"
#define N 10
int main()
{
    int mat[N][N];
    char ch;
    scanf("%c",&ch);
    while (ch != 'D')
    {
        if (ch == 'A')
        {
            receivingMat(mat);
        }
        if (ch == 'B')
        {
            checkAdjacent(mat);
        }
        if (ch == 'C')
        {
            shortPath(mat);
        }
        scanf("%c",&ch);
        
    }
    
}
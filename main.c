#include<stdio.h>
#include "my_mat.h"
#define N 10
int main()
{
int matrix[10][10];
 int a [] = {0 ,3 ,1 ,0 ,0 ,2 ,0 ,0 ,0 ,0};
 int b [] = {3 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0};
 int c [] = {1 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0};
 int d [] = {0 ,0 ,0 ,0 ,0 ,0 ,0 ,5 ,0 ,0};
 int e [] = {0 ,0 ,0 ,0 ,0 ,0 ,0 ,4 ,1 ,1};
 int f [] = {2 ,0 ,0 ,0 ,0 ,0 ,2 ,0 ,0 ,0};
 int gn [] = {0 ,0 ,0 ,0 ,0 ,2 ,0 ,0 ,0 ,0};
 int h [] = {0 ,0 ,0 ,5 ,4 ,0 ,0 ,0 ,0 ,2};
 int in [] = {0 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0};
 int jn [] = {0 ,0 ,0 ,0 ,1 ,0 ,0 ,2 ,0 ,0};
for (int temp = 0; temp < 10; temp++){
    for (int temp2 = 0; temp2 < 10; temp2++){
matrix[0][temp2] = a[temp2];
matrix[1][temp2] = b[temp2];
matrix[2][temp2] = c[temp2];
matrix[3][temp2] = d[temp2];
matrix[4][temp2] = e[temp2];
matrix[5][temp2] = f[temp2];
matrix[6][temp2] = gn[temp2];
matrix[7][temp2] = h[temp2];
matrix[8][temp2] = in[temp2];
matrix[9][temp2] = jn[temp2];
    }
}


    int mat[N][N];
    char ch;
    scanf("%c",&ch);
    while (ch != 'D')
    {
        if(ch=='E')
        {
            for (int ter = 0; ter < N; ter++)
            {
                for (int ret = 0; ret < N; ret++)
                {
                    mat[ter][ret] = matrix [ter][ret];
                }
                
            }
        }
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
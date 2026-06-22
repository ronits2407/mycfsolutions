#include <stdio.h>
 
 
int abs(int n)
{
    if (n < 0)
    {
        n = -n;
    }
 
    return n;
    
}
int main(int argc, char const *argv[])
{
 
    int matrix[5][5];
    int one_i, one_j;
    
 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1)
            {
                one_i = i;
                one_j = j;
            } 
        }
        
    }
    printf("%d", abs(one_i  - 2) + abs(one_j - 2));
 
    return 0;
}
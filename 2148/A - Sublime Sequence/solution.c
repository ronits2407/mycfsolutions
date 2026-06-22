#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
 
    int input[n][2];
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d",&input[i][0], &input[i][1]);
    }
 
    for (int i = 0; i < n; i++)
    {
        printf("%d
", (input[i][1] % 2 == 0) ? 0 : input[i][0]);
    }
    
    
    return 0;
}
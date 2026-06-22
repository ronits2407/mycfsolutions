#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    int n;
    int x = 0;
    scanf("%d", &n);
 
    char program[n][4];
 
    for (int i = 0; i < n; i++)
    {
        scanf("%s", program[i]);
    }
 
    for (int i = 0; i < n; i++)
    {
        if (program[i][1] == '-')
        {
            x--;
        }
        else if (program[i][1] == '+')
        {
            x++;
        }
        
        
    }
 
    printf("%d", x);
    
    
    return 0;
}
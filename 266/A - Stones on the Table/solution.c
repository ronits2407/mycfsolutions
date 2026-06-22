#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    char stones[n + 1];
    int minimum_eliminations = 0;
 
    scanf("%s", &stones);
 
    for (int i = 0; i < n; i++)
    {
        if (stones[i] == stones[i + 1])
        {
            minimum_eliminations++;
        }
        
    }
 
    printf("%d
", minimum_eliminations);
    
    return 0;
}
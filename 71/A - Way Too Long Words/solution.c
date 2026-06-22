#include <stdio.h>
#include <string.h>
#define MAXCHARACTER 100
 
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
 
    char words[n][MAXCHARACTER + 1];
 
    for (int i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }
 
    for (int i = 0; i < n; i++)
    {
        if (strlen(words[i]) > 10)
        {
            printf("%c%d%c
", words[i][0], strlen(words[i]) - 2, words[i][strlen(words[i]) - 1]);
        }
        else
        {
            printf("%s
", words[i]);
        }
        
 
        
    }
    
    
    return 0;
}
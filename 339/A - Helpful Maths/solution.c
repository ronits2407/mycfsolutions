#include <stdio.h>
#include <string.h>
 
int main()
{
    char string[101];
    
    scanf("%s", string);
 
    int length = strlen(string);
    
    for (int i = 0; i < length - 2; i+=2)
    {
        for (int j = 0; j < length - i - 2; j+=2)
        {
            if (string[j] > string[j + 2])
            {
 
                char temp = string[j];
                string[j] = string[j + 2];
                string[j + 2] = temp;
 
            }
            
        }
        
    }
 
    printf("%s
", string);
    
    return 0;
}
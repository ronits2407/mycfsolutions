#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    int aplhabets[26];
    char string[101];
    int counter = 0;
 
    scanf("%s", string);
 
 
    for (int i = 0; i < 26; i++)
    {
        aplhabets[i] = 0;
    }
    
 
    for (int i = 0; string[i] != '\0'; i++)
    {
        int temp = string[i] - 'a';
        if (aplhabets[temp] == 0)
        {
            aplhabets[temp]++;
            counter++;
        }     
    }
 
    printf("%s
", (counter % 2 == 0) ? "CHAT WITH HER!": "IGNORE HIM!");
    
    return 0;
}
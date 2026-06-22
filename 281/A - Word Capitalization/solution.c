#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    char word[1001];
    scanf("%s", word);
 
    if (word[0] <= 'z' && word[0] >= 'a')
    {
        word[0] = 'A' + word[0] - 'a'; 
    }
 
    printf("%s", word);
    
    return 0;
}
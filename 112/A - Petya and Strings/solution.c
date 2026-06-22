#include <stdio.h>
 
char _tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c = 'a' + (c - 'A');
    }
 
    return c;
    
}
 
 
int main()
{
    char strings[2][101];
 
    scanf("%s", strings[0]);
    scanf("%s", strings[1]);
 
    for (int i = 0; strings[0][i] != '\0'; i++)
    {
        if (_tolower(strings[0][i]) < _tolower(strings[1][i]))
        {
            printf("-1
");
            return 0;
        }
        else if (_tolower(strings[0][i]) > _tolower(strings[1][i]))
        {
            printf("1
");
            return 0;
        }    
        
    }
    
    printf("0
");
    return 0;
}
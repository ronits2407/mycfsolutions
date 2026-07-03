#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    int w;
    scanf("%d", &w);
    
    
    printf("%s
", (w % 2 == 0) ? (w == 2) ? "No":"YES":"No");
    
    return 0;
}
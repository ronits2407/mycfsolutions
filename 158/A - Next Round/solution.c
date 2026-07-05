#include <stdio.h>
 
int main()
{
    int n, k, i;
    
    scanf("%d", &n);
    scanf("%d", &k);
    
    int scores[n];
    
    
 
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &scores[i]); 
    }
    for (i = 0; (i < n) && (scores[i] != 0) && (scores[i] >= scores[k - 1]); i++);
    printf("%d", i);
    
    return 0;
}
#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    int n, temp;
    scanf("%d", &n);
 
    int arr[n][1];
 
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &temp);
            arr[i][0] += temp;
        }
        
    }
 
    temp = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] > 1)
        {
            temp++;
        }
        
        
    }
 
    printf("%d
", temp);
    
    
    return 0;
}
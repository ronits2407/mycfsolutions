#include <stdio.h>
 
int main()
{
    long long dim[3];
 
    for (int i = 0; i < 3; i++)
    {
        scanf("%lld", &dim[i]);
    }
    
    dim[0] = (dim[0] + dim[2] - 1) / dim[2];
    dim[1] = (dim[1] + dim[2] - 1) / dim[2];
 
    printf("%lld
", dim[0] * dim[1]);
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n;
    cin >> n;
    int numbers[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
 
    int count_max = 0;
    int count = 0;
 
    for (int i = 0; i < n - 1; i++)
    {
        if(numbers[i] <= numbers[i + 1] )
        {
            count++;
        }
        else{
            if (count > count_max)
            {
                count_max = count;
            }
 
            count = 0;
        }
    }
 
    if (count > count_max )
    {
        count_max = count;
    }
    
    cout << count_max + 1;
    
    
 
    return 0;
}
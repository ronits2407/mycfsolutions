#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, numbers[3];
    cin >> n >> numbers[0] >> numbers[1] >> numbers[2];
 
    sort(numbers, numbers + 3);
    int max_ = LONG_LONG_MIN;
 
    for (int i = n / numbers[0]; i >= 0; i--)
    {
        
        // check for n - number[0] * i
        int r = n - i * numbers[0];
        for (int j = r / numbers[1]; j >= 0; j--)
        {
            int s = r - j * numbers[1];
 
            if (s % numbers[2] == 0)
            {
                max_ =  max(max_, i + j + (s / numbers[2]));
            }
            
        }
        
        
 
 
    }
 
    cout << max_ << endl;
    
 
 
 
    return 0;
}
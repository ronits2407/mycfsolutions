#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int no_of_differnt_bits(int x, int y)
{
    int r = x ^ y;
 
    int differnt = 0;
 
    while (r != 0)
    {
        if (r & 1 == 1)
        {
            differnt++;
        }
        r /= 2;
        
    }
 
    return differnt;
    
}
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n, m, k;
 
    cin >> n >> m >> k;
 
    vector<int> armies(m + 1);
 
    for (int i = 0; i <= m; i++)
    {
        cin >> armies[i]; 
    }
 
    int counter = 0;
    for (int i = 0; i < m; i++)
    {
        if (no_of_differnt_bits(armies[i], armies[m]) <= k)
        {
            counter++;
        }
        
    }
 
    cout << counter << endl; 
    
    
 
    return 0;
}
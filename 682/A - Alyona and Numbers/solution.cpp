#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    cin >> n >> m ;
 
    vector<pair<int, int>> mod_5(5, {n / 5, m / 5});
 
    n = (n % 5);
    m = (m % 5);
 
    for (int i = 1; i <= n; i++)
    {
        mod_5[i].first++;
    }
    
    for (int i = 1; i <= m; i++)
    {
        mod_5[i].second++;
    }
 
 
    int combinations = (mod_5[0].first * mod_5[0].second);
 
    for (int i = 1; i < 5; i++)
    {
        combinations += (mod_5[i].first * mod_5[5 - i].second);
    }
 
    cout << combinations << endl;
    
 
 
    return 0;
}
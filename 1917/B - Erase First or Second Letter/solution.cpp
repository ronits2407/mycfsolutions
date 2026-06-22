#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    bool seen[26] = {false};
 
    int distinct_count = 0;
 
    int combinations = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (seen[s[i] - 'a'] == false)
        {
            distinct_count++;
        }
        
 
        seen[s[i] - 'a'] = true;
 
        combinations += distinct_count;
        
    }
 
    cout << combinations << endl;
    
}
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        solve();
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int i;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            break;
        }
        else
        {
            s.append("0");
        }
        
        
    }
    
    
    int curr = 0;
    int max_ = 0;
 
    for (; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            max_ = max(curr, max_);
            curr = 0;
        }
        else
        {
            curr++;
        }
        
    }
 
    max_ = max(curr, max_);
 
    cout << max_ << endl;
    
    
 
 
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
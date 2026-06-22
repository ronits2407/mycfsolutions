#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    string s;
    cin >> s;
 
    string t;
    cin >> t;
 
    int j = 0;
 
    for (int i = 0; i < s.size(); i++)
    {
        if (j == t.size() && s[i] == '?')
        {
            s[i] = t[j - 1];
        }
        else if (j == t.size())
        {
            continue;
        }
        
        
        if (s[i] == t[j])
        {
            j++;
            continue;
        }
        else if (s[i] == '?')
        {
            s[i] = t[j++];
            continue;
        }
        
        
    }
 
    if (j == t.size())
    {
        cout << "YES
" << s << endl; 
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    
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
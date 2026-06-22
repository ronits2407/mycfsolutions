#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int minimum = 0;
 
    for (int i = n - 2; i >=0 ; i--)
    {
        if (s[i] != s[i + 1])
        {
            minimum++;
            s[i] = s[i + 1];
        }
        
    }
 
    cout << minimum << endl;
    
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
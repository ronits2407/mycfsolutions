#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    vector<int> boxsex(26, 0);
    int n;
    cin >> n;
    string boxes;
    cin >> boxes;
 
    for (int i = 0; i < n; i++)
    {
        boxsex[boxes[i] - 'a']++;
    }
    
 
    string girfriend;
    cin >> girfriend;
    for (int i = 0; i < n; i++)
    {
        if (boxsex[girfriend[i] - 'a'] == 0)
        {
            cout << "NO" << endl;
            return;
        }
 
        boxsex[girfriend[i] - 'a']--;
        
    }
    
    cout << "YES" << endl;
    return; 
 
 
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
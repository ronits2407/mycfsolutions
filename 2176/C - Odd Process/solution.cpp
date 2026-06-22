#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> evens;
    vector<int> odds;
 
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2 == 0) evens.push_back(temp);
        else odds.push_back(temp);
    }
 
    sort(evens.rbegin(), evens.rend());
    sort(odds.rbegin(), odds.rend());
 
    int num_evens = evens.size();
    vector<int> even_pref(num_evens + 1, 0);
    for (int i = 0; i < num_evens; i++) {
        even_pref[i + 1] = even_pref[i] + evens[i];
    }
 
    //no odd coins, all 0
    if (odds.empty()) {
        for (int k = 1; k <= n; k++) cout << 0 << " ";
        cout << endl;
        return;
    }
 
    int max_odd = odds[0];
    int num_odds = odds.size();
 
    for (int k = 1; k <= n; k++)
    {
        int x = max(1LL, k - num_evens);
 
        if (x % 2 == 0) x++;
 
        if (x > num_odds || x > k) 
        {
            cout << 0 << " ";
        } 
        else 
        {
            int y = k - x;
            cout << (max_odd + even_pref[y]) << " ";
        }
    }
    cout << endl;
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
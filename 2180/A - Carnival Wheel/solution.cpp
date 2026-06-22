#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int l, a, b;
    cin >> l >> a >> b;
 
    int maxx = LONG_LONG_MIN;
    int nexta = a;
    vector<bool> visited(l, false);
    do
    {
        int temp;
        temp = nexta + b *(int) ceil(( l - nexta) / (double)b -1);
        maxx = max(temp, maxx);
 
        visited[nexta] = true;
        nexta = (temp + b) % l;
 
    } while (visited[nexta] == false);
    
 
    cout << maxx << endl;
    
    
 
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
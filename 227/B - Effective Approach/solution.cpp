#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    cin >> n;
 
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first;
        p[i].second = i + 1;
    }
 
    sort(p.begin(), p.end());
 
    int m;
    cin >> m;
 
    int vasya = 0, petya = 0;
 
    while (m--)
    {
        int to_find;
        cin >> to_find;
 
        vasya += p[to_find - 1].second;
        petya += n - p[to_find - 1].second + 1;
    }
 
 
    cout << vasya << ' ' << petya << endl;
 
    return 0;
}
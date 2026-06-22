#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    // bool connections[n][n];
    // vector<vector<bool>> connections(n, vector<bool>(n, false));
    vector<vector<int>> connections(n);
    
    for (int i = 0; i < m; i++)
    {
        int temp1, temp2;
        cin  >> temp1 >> temp2;
 
        connections[temp1 - 1].push_back(temp2 - 1);
        connections[temp2 - 1].push_back(temp1 - 1);
    }
 
    // start bfs
    queue<pair<int, int>> to_search;
    vector<int> mininum_distances(n, LONG_LONG_MAX);
 
    to_search.push({0, 0});
    vector<bool> seen(n, false);
    seen[0] = true;
    int j = 1;
    int last_push = 0;
    while (!to_search.empty())
    {
        if (to_search.front().second > last_push)
        {
            j++;
        }
        last_push = to_search.front().second;
 
        for (int i = 0; i < connections[to_search.front().first].size(); i++)
        {
            if (seen[connections[to_search.front().first][i]] == false)
            {
                to_search.push({connections[to_search.front().first][i], j});
                seen[connections[to_search.front().first][i]] = true;
            }
            
        }
        
 
        mininum_distances[to_search.front().first] = 
        min(mininum_distances[to_search.front().first], to_search.front().second);
        to_search.pop();
        
    }
 
    vector<int> ans(k, LONG_LONG_MIN);
    for (int i = 0; i < n; i++)
    {
        if (mininum_distances[i] > ans[a[i] - 1])
        {
            ans[a[i] - 1] = mininum_distances[i];
        }
        
    }
 
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << ' ' ;
    }
    
    
    
    
    
    
     
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define ask(v, n) \
    for (int i = 0; i < (n); ++i) \
        cin >> v[i];
 
#define give(v, n) \
    for (int i = 0; i < (n); ++i) \
        cout << v[i] << ' '; \
    cout << '
';
 
const int MOD = 1e9 + 7;
const int INF = 1e18;
void _print() { cerr << "]
"; }
template <typename T, typename... Args>
void _print(T t, Args... args)
{
    cerr << t << (sizeof...(args) ? ", " : "");
    _print(args...);
}
#ifndef ONLINE_JUDGE
#define debug(x...) \
    cerr << "[" << #x << "] = ["; \
    _print(x);
#else
#define debug(x...)
#endif
 
void solve_ronit(int tc)
{
    int n;
    cin >> n;
 
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        
        freq[temp]++;
    }
    
    vector<int> candidates;
    int count = 0;
    for (auto &&number : freq)
    {
        count += number.second / 2;
        
    }
    if (count < 4)
    {
        cout << "NO" << endl;
        return;
    }
    
    for (auto &&number : freq)
    {
        if (!candidates.empty())
        {
            if (number.second < 2)
            {
                continue;
            }
            
            candidates.push_back(number.first);
            break;
        }
        
        if (number.second < 2)
        {
            continue;
        }
 
        if (number.second >= 4)
        {
            candidates.push_back(number.first);
            candidates.push_back(number.first);
            break;
        }
        else
        {
            candidates.push_back(number.first);
        }
        
        
    }
    
    for (auto it = freq.rbegin(); it != freq.rend(); ++it)
    {
        if (candidates.size() == 3)
        {
            if (it->second < 2)
            {
                continue;
            }
            candidates.push_back(it->first);
            break;
        }
        
        if (it->second < 2)
        {
            continue;
        }
 
        if (it->second >= 4)
        {
            candidates.push_back(it->first);
            candidates.push_back(it->first);
            break;
        }
        else
        {
            candidates.push_back(it->first);
        }
        
        
    }
 
    count = 0;
    for (auto &&number : freq)
    {
        count += number.second / 2;
        
    }
    if (count < 4)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << candidates[0] << " " << candidates[1] << " " << candidates[3] << " " <<  candidates[2] << " "<<  candidates[0] << " " <<  candidates[2] << " " << candidates[3] << " " << candidates[1] << endl;
    }
    
    
    
    
    
}
 
int32_t main()
{
    cout << fixed << setprecision(20);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        solve_ronit(i);
    return 0;
}
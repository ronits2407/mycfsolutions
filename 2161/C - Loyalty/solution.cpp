#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n, x;
    cin >> n >> x;
 
    multiset<int> l;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        l.insert(temp);
    }
 
    vector<int> answers;
    int maxscore = 0;
    int s = 0;
    while (!l.empty())
    {
        if (((s + *l.begin()) / x) == s / x)
        {
            s += *l.begin();
            answers.push_back(*l.begin());
            l.erase(l.begin());
        }
        else
        {
            s += *l.rbegin();
            answers.push_back(*l.rbegin());
            l.erase(--l.end());
            maxscore += *answers.rbegin();
        }
        
    }
 
    cout << maxscore << endl;
    for (int i = 0; i < n; i++)
    {
        cout << answers[i] << ' ';
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
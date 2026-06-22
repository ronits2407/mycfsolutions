#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
 
    vector<string> a(n);
    // vector<pair<string, int>> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // b[i].first = a[i];
        // b[i].second = i;
    }
 
    // sort(b.begin(), b.end());
 
    string answer;
 
    answer = a[0];
 
    for (int i = 1; i < n; i++)
    {
        string temp = answer;
        string temp2 = a[i];
        string str1 = temp.append(temp2);
        string str2 = a[i].append(answer);
       
        if (str1 < str2)
        {
            answer = str1;
        }
        else
        {
            answer = str2;
        }
        
        
        // cout << answer << endl;
        
    }
 
    cout << answer << endl;
    
 
 
    
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
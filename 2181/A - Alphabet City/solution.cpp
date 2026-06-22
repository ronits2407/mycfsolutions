#include <bits/stdc++.h>
using namespace std;
#define int long long
 
 
bool possible(int k, vector<int>& alpha, vector<int>& tempAlpha, int m)
{
    
    for (int i = 0; i < 26; i++)
    {
        if ((alpha[i] * (m - k) - tempAlpha[i]) < 0)
        {
            return false;
        }
        
    }
 
    return true;
    
    
}
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector<int> alpha(26, 0);
    
    vector<string> streetNames(n);
    for (auto &&name : streetNames)
    {
        cin >> name;
    }
    for (auto &&street : streetNames)
    {
        
        for (auto &&ch: street)
        {
            alpha[ch - 'A']++;
        }
    }
    
    for (int l = 0; l < n; l++)
    {
        for (auto &&ch : streetNames[l])
        {
            alpha[ch - 'A']--;
        }
        int low = 0;
        int high = m - 1;
        int ans = -1;
        
        // bool atleat = false;
        vector<int> tempAlpha(26, 0);
        for (auto &&ch : streetNames[l])
        {
            tempAlpha[ch - 'A']++;
        }
        
        
        while (low <= high)//  t f f f
        {
            int mid = (low + high) / 2;
            
            if (possible(mid, alpha, tempAlpha, m))
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            
            
            
        }
        
        if (ans != -1) 
        {
            cout << ans << ' '; 
        }
        else
        {
            cout << -1 << ' ';
        }
        
        for (auto &&ch : streetNames[l])
        {
            alpha[ch - 'A']++;
        }
        
        
    }
    
 
    return 0;
}
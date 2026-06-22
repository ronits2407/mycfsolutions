#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    string s;
    cin >> s;
 
    if (s[0] == '*' && s.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    
 
    int star_count = 0;
 
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '*')
        {
            star_count++;
        }   
    }
 
 
    if (star_count >= 2)
    {
        cout << -1 <<endl; 
        return;
    }    
    if (star_count == 0)
    {
        string match = "><";
        int j = 0;
 
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == match[j])
            {
                j++;
                if (j == 2)
                {
                    cout << -1 << endl;
                    return;
                }
                
            }
            
        }
 
        int left = 0;
        
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '<')
            {
                left++;
            }
            
        }
 
        cout << max(left, (int)s.size() - left) << endl;
        return;
        
    }
    else
    {
 
         string match = "><";
        int j = 0;
 
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == match[j])
            {
                j++;
                if (j == 2)
                {
                    cout << -1 << endl;
                    return;
                }
                
            }
            
        }
 
        if (s[0] != '*' && s[s.size() - 1] != '*')
        {
            int star_loc;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '*')
                {
                    star_loc = i;
                    break;
                }
                
            }
 
            if (s[star_loc - 1] == '<' && s[star_loc + 1] == '>')
            {
                cout << max(star_loc + 1, (int)s.size() - star_loc) << endl;
                return;
            }
            else
            {
                cout << -1 << endl;
            }
            
            
            
        }
        else
        {
            if (s[0] == '*')
            {
                for (int i = 1; i < s.size(); i++)
                {
                    if (s[i] == '<')
                    {
                        cout << -1 << endl;
                        return;
                    }
                    
                }
 
                cout << s.size() << endl;
                return;
                
            }
            else
            {
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] == '>')
                    {
                        cout << -1 << endl;
                        return;
                    }
                    
                }
 
                cout << s.size() << endl;
                return;
                
            }
        }
        
        
    }
    
    
    
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
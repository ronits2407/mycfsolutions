#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    string input;
    cin >> input;
 
    if (input[0] == 'f')
    {
        //encode
 
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
 
        for (int i = 0; i < n; i++)
        {
            cout << (char)('a' + a[i] - 1);
        }
        
    }
    else
    {
        string s;
        cin >>s;
        
        cout << s.size() << endl;
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] - 'a' + 1 << ' ';
        }
        
    }
    
    
    
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
string int_to_26(int x)
{
    string output(7, 'a');
 
    for (int i = 6; i >= 0 && x != 0; i--)
    {
        output[i] = (char)('a' + (x % 26));
        x/= 26;
    }
 
    return output;
    
 
}
 
int twenty_to_int(string x)
{
    int output = 0;
 
    for (int i = 0; i < 7; i++)
    {
        output = (output * 26) + (x[i] - 'a');
    }
 
    return output;
    
}
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    string input;
    cin >> input;
 
    if (input[0] == 'f')
    {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
 
        for (int i = 0; i < n; i++)
        {
            
            // convert a[i] to 26 base
 
            cout << int_to_26(a[i]);
            
        }
        
 
    }
    else
    {
        string s;
        cin >>s;
 
        int n = s.size() / 7;
        cout << n << endl;
 
        for (int i = 0; i < n; i++)
        {
            cout << twenty_to_int(s.substr((i * 7),7)) << ' ';
        }
        
        
    }
    
    
    
 
    return 0;
}
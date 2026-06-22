#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    string input;
 
    cin >> input;
    
    for (char c : input)
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') 
        {
            continue;
        }
        cout << '.' << c;
        
        
    }
    
 
    return 0;
}
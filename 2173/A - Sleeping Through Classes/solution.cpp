#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n, k;
    cin >> n >> k;
 
    string input;
    cin >>input;
 
    int sleep_counter = 0;
    int next_awake_counter = 0;
 
    
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '1')
        {
            next_awake_counter = k;
        }
        else if(input[i] == '0' && next_awake_counter >= 1)
        {
            next_awake_counter--;
 
        }
        else
        {
            sleep_counter++;
        }
        
        
        
    }
 
    cout << sleep_counter << endl;
    
    
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
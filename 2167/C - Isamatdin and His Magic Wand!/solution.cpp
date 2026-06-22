#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n;
    vector<int> input_array(n);
    bool are_even_present = false;
    bool are_odd_present = false;
 
    for (int i = 0; i < n; i++)
    {
        cin >> input_array[i];
        if (input_array[i] % 2 == 0)
        {
            are_even_present = true;
        }
        else
        {
            are_odd_present = true;
        }
    }
 
    if (are_even_present && are_odd_present)
    {
        sort(input_array.begin(), input_array.end());
    }
    
    for (int i = 0; i < input_array.size(); i++)
    {
        cout << input_array[i]  << ' ';
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n, k;
    cin >> n >> k;
 
    int first_time_points;
    vector<int> cumulative_first_time_points(n);
    vector<int> second_time_points(n);
 
    cin >> first_time_points;
    cumulative_first_time_points[0] = first_time_points;
 
    for (int i = 1; i < n; i++)
    {
        cin >> first_time_points;
        cumulative_first_time_points[i] = cumulative_first_time_points[i - 1] + first_time_points;
    }
    
    cin >>second_time_points[0];
    
    for (int i = 1; i < n; i++)
    {
        cin >> second_time_points[i];
        second_time_points[i] = max(second_time_points[i], second_time_points[i - 1]);
    }
 
    int max_experience = 0;
 
    for (int i = 0; i < min(n, k); i++)
    {
        int current_experience = 0;
        current_experience += cumulative_first_time_points[min(n - 1, i)];
        current_experience += second_time_points[i] * max(0LL, k - i - 1);
 
        if (current_experience > max_experience)
        {
            max_experience = current_experience;
        }
        
    }
 
    cout << max_experience << endl;
    
    
    
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
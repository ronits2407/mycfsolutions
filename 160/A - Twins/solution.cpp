#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n, total_sum = 0;
    cin >> n;
 
    int coins[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        total_sum += coins[i];
    }
 
 
    sort(coins, coins + n);
 
    int greatest_sum = 0, coins_count = 0;
 
    for (int i = n - 1; i >= 0; i--)
    {
        greatest_sum += coins[i];
        coins_count++;
 
        if (greatest_sum > (total_sum  / 2))
        {
            cout << coins_count;
            return 0;
        }
    }
    
}
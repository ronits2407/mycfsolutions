#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n;
    cin >> n;
 
    vector<int> prices_of_bottles_in_ith_shop;
 
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        prices_of_bottles_in_ith_shop.push_back(temp); 
    }
 
    sort(prices_of_bottles_in_ith_shop.begin(), prices_of_bottles_in_ith_shop.end());
 
    int q;
    cin >> q;
 
    vector<int> no_of_coints_he_can_spend_on_ith_day;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        no_of_coints_he_can_spend_on_ith_day.push_back(temp);
    }
 
    for (int i = 0; i < q; i++)
    {
        auto low = upper_bound(prices_of_bottles_in_ith_shop.begin(), prices_of_bottles_in_ith_shop.end(), no_of_coints_he_can_spend_on_ith_day[i]);
 
        cout << low - prices_of_bottles_in_ith_shop.begin() << endl ; 
        
        
    }
    
    
    
 
    return 0;
}
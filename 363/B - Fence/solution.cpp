#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n, k;
    cin >> n >> k;
 
    vector<int> heights;
 
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        heights.push_back(temp);
    }
 
 
    int currentsum = 0;
    for (int i = 0; i < k; i++)
    {
        currentsum += heights[i];
    }
    int index_of_min_sum = 0;
    int min_sum =  currentsum;
    for (int i = 1; i <= n - k; i++)
    {
        currentsum += heights[i + k - 1] - heights[i -  1];
        
        if(currentsum < min_sum)
        {
            min_sum = currentsum;
            index_of_min_sum = i;
        }
    }
 
    cout << index_of_min_sum + 1<<endl ; 
 
 
    
    
 
    return 0;
}
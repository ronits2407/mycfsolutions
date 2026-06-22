#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int required_water_buckets(int height,vector<int>& heights_of_corals)
{
    int water_buckets = 0;
   for (int i = 0; i < heights_of_corals.size() && height > heights_of_corals[i]; i++)
   {
     water_buckets += height - heights_of_corals[i];
   }
   
   return water_buckets;
    
}
 
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int testcases;
    cin >> testcases;
 
    while (testcases--)
    {
        int n, w;
        cin >> n >> w;
        vector<int> heights_of_corals(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> heights_of_corals[i];
        }
 
        sort(heights_of_corals.begin(), heights_of_corals.end());
 
        int low = 1;
        int high = w + heights_of_corals.back();
 
        while (high - low > 1 )
        {
            int mid = (low + high) / 2;
            if (w >= required_water_buckets(mid, heights_of_corals))
            {
                low = mid;
            }
            else
            {
                high = mid - 1;
            }
            
        }
 
        
 
        
        if (required_water_buckets(high, heights_of_corals) <= w)
        {
            cout << high << endl;
        }
        else
        {
            cout << low << endl;
        }
        
        
        
        
        
    }
    
 
    return 0;
}
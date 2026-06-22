#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, score = 0;
        cin >> n >> k;
        vector<int> blackboard_integers;
        vector<int> hash_map(k, 0);
 
 
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
 
            if (temp >= k)
            {
                continue;
            }
            blackboard_integers.push_back(temp);
            hash_map[blackboard_integers.back() - 1]++;
        }
 
        if (k % 2 == 0)
        {
            score += hash_map[k / 2 - 1] / 2;
            hash_map[k / 2 - 1] = 0;
        }
 
        for (int i = 0; i < blackboard_integers.size(); i++)
        {
            if (hash_map[k - blackboard_integers[i] - 1] > 0 && hash_map[blackboard_integers[i] - 1] > 0)
            {
                score++;
                hash_map[k - blackboard_integers[i] - 1]--;
                hash_map[blackboard_integers[i] - 1]--;
            }
            
        }
        
        cout<< score << endl;
        
 
 
 
        
    }
    
 
    return 0;
}
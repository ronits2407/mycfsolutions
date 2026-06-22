#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n, h, tall_counter = 0;
    cin >> n >> h;
 
    int heights[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
        if (heights[i] > h)
        {
            tall_counter++;
        }
    }
 
    cout << n + tall_counter;
    
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int m, n;
    cin >> n >> m;
 
    int pieces[m];
 
    for (int i = 0; i < m; i++)
    {
        cin >> pieces[i];
    }
 
    sort(pieces, pieces + m, greater<int>());
 
    int difference = 0, min_DIFFERENCE = pieces[0] - pieces[m - 1];
    for (int i = 0; i <= m - n; i++)
    {
        int r = pieces[i] - pieces[i + n - 1 ]; 
 
        if (r < min_DIFFERENCE )
        {   
            min_DIFFERENCE = r;
        }
        
    }
 
    cout <<min_DIFFERENCE; 
    
    
 
    return 0;
}
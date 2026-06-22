#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int white(int x1, int y1, int x2, int y2){
    if ((x2 - x1 + 1) % 2 == 1 && (y2 - y1 + 1) % 2 == 1)
    {
        if ((x1 + y1) % 2 == 0)
        {
            return ((x2 - x1 + 1) * (y2 - y1 + 1) - 1) / 2 + 1;
        }
        else
        {
            return ((x2 - x1 + 1) * (y2 - y1 + 1) - 1) / 2;
        }
        
        
    }
    else
    {
        return (x2 - x1 + 1) * (y2 - y1 + 1) / 2;
    }
    
    
}
 
int black(int x1, int y1, int x2, int y2){
    return (x2 - x1 + 1) * (y2 - y1 + 1) - white(x1, y1, x2, y2);
}
 
 
void solve()
{
    int n, m;
    cin >> n >> m;
 
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
 
    int x3, y3, x4, y4;
    cin >> x3 >> y3 >> x4 >> y4;
 
    int white_cells  = white(1, 1, m, n);
    int black_cells = n * m - white_cells;
 
 
    // spill white
    white_cells += black(x1, y1, x2, y2);
    black_cells -= black(x1, y1, x2, y2);
 
    // spill black
    black_cells += white(x3, y3, x4, y4);
    white_cells -= white(x3, y3, x4, y4);
 
    int x5 = max(x1, x3), y5 = max(y1, y3), x6 = min(x2, x4), y6 = min(y2, y4);
    if (x6 < x5 || y6 < y5)
    {
        cout << white_cells << ' ' << black_cells << endl;
        return;
    }
 
    black_cells += black(x5, y5, x6, y6);
    white_cells -= black(x5, y5, x6, y6);
 
    cout << white_cells << ' ' << black_cells << endl;
    return;
    
 
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
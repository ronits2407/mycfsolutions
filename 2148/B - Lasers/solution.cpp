#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int test_cases;
    cin >> test_cases;
    int answers[test_cases];
    
 
    for (int i = 0; i < test_cases; i++)
    {
        int n, m, x;
        cin >> n >> m >> x >> x;
    
        for (int i = 0; i < n; i++)
        {
            cin >> x;
        }
    
        for (int i = 0; i < m; i++)
        {
            cin >> x;
        }
        answers[i] = n + m;
    }
    
    
    for (int i = 0; i < test_cases; i++)
    {
        cout << answers[i] << endl; 
    }
    
    
 
    return 0;
}
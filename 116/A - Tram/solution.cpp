#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int n, answer, people_inside_tram = 0, max_people_inside_tram = 0;
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
 
        people_inside_tram += b - a;
 
        if (people_inside_tram > max_people_inside_tram)
        {
            max_people_inside_tram = people_inside_tram;
        }
        
    }
 
    cout << max_people_inside_tram;
    
 
    return 0;
}
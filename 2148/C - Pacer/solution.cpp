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
        answers[i] = 0;
    }
    
 
 
    for (int i = 0; i < test_cases; i++)
    {
        int n, m, current_position = 0, current_minute = 0;
        cin >> n >> m;
        int requirements[n][2];
 
        for (int j = 0; j < n; j++)
        {
            cin >> requirements[j][0] >> requirements[j][1];
            if (requirements[j][1] != current_position)
            {
                if ((requirements[j][0] - current_minute) % 2 == 0)
                {
                    answers[i] += (requirements[j][0] - current_minute) - 1;
                }
                else
                {
                    answers[i] += (requirements[j][0] - current_minute);
                }
    
                
            }
            else
            {
                if ((requirements[j][0] - current_minute) % 2 == 0)
                {
                    answers[i] += (requirements[j][0] - current_minute);
                }
                else
                {
                    answers[i] += (requirements[j][0] - current_minute) - 1;
                }
                
            }
            
            current_position = requirements[j][1];
            current_minute = requirements[j][0];
        }
        answers[i] += (m - current_minute);  
    }
    
    for (int i = 0; i < test_cases; i++)
    {
        cout << answers[i] << endl;
    }
    
 
    return 0;
}
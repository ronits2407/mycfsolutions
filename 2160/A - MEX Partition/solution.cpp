#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int test_cases;
    cin >>test_cases;
    
    int answers[test_cases];
 
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int multiset[n];
        int is_zero_present = 0;
 
        for (int j = 0; j < n; j++)
        {
            cin >> multiset[j];
 
            if (multiset[j] == 0)
            {
                is_zero_present++;
                
            }
            
        }
 
        if (is_zero_present == 0)
        {
            answers[i] = 0;
        }
        else if (is_zero_present == n)
        {
            answers[i] = 1;
            
        }
        else
        {
            sort(multiset, multiset + n);
 
            int current = 0;
            int j;
            for (j = 1; j < n; j++)
            {
                if (multiset[j] != multiset[j - 1] && multiset[j] != multiset[j - 1] + 1)    
                {
                    answers[i] =  multiset[j - 1] + 1; 
                    break;
                }
                
            }
 
            if(j == n)
            {
                answers[i] = multiset[j - 1] + 1;
            }
            
        }
        
           
    }
 
 
    for (int i = 0; i < test_cases; i++)
    {
        cout << answers[i] << endl;
    }
    
    
 
    return 0;
}
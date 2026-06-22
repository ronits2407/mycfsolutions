#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    int testcases;
 
    cin >> testcases;
 
    vector<int> answers[testcases];
 
    for (int i = 0; i < testcases; i++)
    {
        int n;
        cin >> n;
        long long b_array[n];
        int m = 1;
 
        for (int j = 0; j < n; j++)
        {
            cin >> b_array[j];
        }
 
        answers[i].push_back(1);
 
        for (int j = 1; j < n; j++)
        {
            long long r = b_array[j] - b_array[j - 1];
 
            if (r <= j)
            {
                // answers[i][m++] = answers[i][j - r];
                answers[i].push_back(answers[i][j - r]);
            }
            else
            {
                // answers[i][m] = answers[i][m - 1] + 1;
                answers[i].push_back(m + 1);
                m++;
            }   
        } 
    }
 
    for (int i = 0; i < testcases; i++)
    {
        for (int x : answers[i])
        {
            cout << x << ' ';
        }
        cout << endl;
        
    }
    
    
 
    return 0;
}
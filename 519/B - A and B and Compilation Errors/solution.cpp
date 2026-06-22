    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
 
    int32_t main()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
 
        int n;
        cin >> n;
 
        vector<int> first_line(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> first_line[i];
        }
 
        sort(first_line.begin(), first_line.end());
 
        vector<int> second_line(n - 1);
 
        for (int i = 0; i < n - 1; i++)
        {
            cin >> second_line[i]; 
        }
 
        sort(second_line.begin(), second_line.end());
        
        vector<int> third_line(n - 2);
 
        for (int i = 0; i < n - 2; i++)
        {
            cin >> third_line[i]; 
        }
 
        sort(third_line.begin(), third_line.end());
 
 
        int different = first_line[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            if (first_line[i] != second_line[i])
            {
                different = first_line[i];
                break;
            }
            
        }
 
        cout << different <<endl; 
        
        different = second_line[n - 2];
        for (int i = 0; i < n - 2; i++)
        {
            if (third_line[i] != second_line[i])
            {
                different = second_line[i];
                break;
            }
            
        }
        
        cout << different <<endl ;
        
 
        
 
 
        
 
        return 0;
    }
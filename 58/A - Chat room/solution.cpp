    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
 
    int32_t main()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
 
        string input;
        cin >> input;
 
 
        string match = "hello";
 
        int j = 0;
 
        for (auto c : input)
        {
            c = tolower(c);
            if (c == match[j])
            {
                j++;
                if (j == 5)
                {
                    break;
                }
                
            }
            
        }
 
        if (j == 5)
        {
            cout << "YES" <<endl;  
        }
        else
        {
            cout << "NO" << endl;
        }
        
        
        
 
        return 0;
    }
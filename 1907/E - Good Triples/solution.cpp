#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define friendzone false
#define endl '
'
#define S(A) sort(A.begin(), A.end())
#define For(n, i) for(int i = 0; i < n; i++)
#define FOR(n, i) for(int i = n - 1; i >= 0; i--)
 
void out(vector<ll> A){
    for(auto& x : A){
        cout << x << " ";
    }
    cout << endl;
}
 
void input_2D(vector<vector<ll>>& A, ll n){
    For(n, i){
        For(n, j){
            ll temp;
            cin >> temp;
            A[i].push_back(temp);
        }
    }
}
 
void input_1D(vector<ll>& A, ll n){
    For(n, i){
        cin >> A[i];
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t, k, n, mx, mn, ans;
    bool Does_she_like_me = true;
    
    cin >> t;
    while(t--){
        ans = 1;
        string s;
        cin >> s;
        for(auto& x : s){
            n = x -'0';
            ans *= ((n + 2) * (n + 1)) / 2;
        }
        cout << ans << endl;
    }
}
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
 
    long long t, k, n, mx, mn, ans, p, q;
    bool Does_she_like_me = true;
    
    cin >> t;
    while(t--){
        ans = 0;
        mx = -1;
        mn = 4e18;
        cin >> n >> p >> q;
 
        if(p + q + 1 < n){
            cout << "Yes" << endl;
        }
        else if(p == q && p == n){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}
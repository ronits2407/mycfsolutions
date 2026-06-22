#include <iostream>
#include <vector>
using namespace std;
 
bool all_same(const vector<long long> &v) {
    for (int i = 1; i < v.size(); i++) {
        if (v[i] != v[0]) return false;
    }
    return true;
}
 
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t, n;
    cin >> t;
    while (t-- ) {
        cin >> n;
        long long k = 2;
        vector<long long> a(n);
 
        for (auto &e : a) cin >> e;
        while (true) {
            vector<long long> b(n);
            for (int i = 0; i < n; i++) {
                b[i] = a[i] % k;
            }
 
            if (all_same(b)) k *= 2;
            else {
                cout << k << '
';
                break;
            }
        }
        
    }
    return 0;
}
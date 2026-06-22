/*
__________              .__  __   
\______   \ ____   ____ |__|/  |_ 
 |       _//  _ \ /    \|  \   __\
 |    |   (  <_> )   |  \  ||  |  
 |____|_  /\____/|___|  /__||__|  
        \/            \/          was here :)
 
*/
 
 
 
 
 
 
 
 
 
/**
 * ------------------------------------------------------------------
 * @file:   ronits2407_core.cpp
 * @author: Ronit (ronits2407)
 * @notice: SECURE TEMPLATE - AUTHORIZED USE ONLY
 * ------------------------------------------------------------------
 **/
 
// --- 1. SAFE COMPILER OPTIMIZATIONS ---
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
 
#include <bits/stdc++.h>
using namespace std;
 
// --- 2. RONIT SECURITY VAULT (Anti-Plagiarism) ---
namespace Ronit_Security_Vault_2407 {
    const string OWNER = "ronits2407";
    const string HASH = "X92-B77-SECURE";
    
    // Dead code signature
    inline void verify_integrity() {
        volatile int check = 2407;
        if (check != 2407) throw "Integrity Failure";
    }
}
 
// --- 3. MACROS & ALIASES ---
#define int long long
using ll = long long;
using ld = long double;
typedef long long ll;
typedef long double ld;
#define pb push_back
#define vll vector<ll>
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define boost_ronit ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define make_pair mp
#define vi vector<ll>
#define vpii vector<pair<int, int>>
#define ask(v, n) for(int i = 0; i < n ; ++i) cin >> v[i]
#define give(v, n) for(int i = 0; i < n; ++i){ cout << v[i] << ' ';} cout << endl
 
const int MOD = 1e9 + 7;
const ll INF = 1e18;
 
// --- 4. DEBUGGING SUITE (Local Only) ---
void _print() { cerr << "]
"; }
template <typename T, typename... Args>
void _print(T t, Args... args) {
    cerr << t << (sizeof...(args) ? ", " : "");
    _print(args...);
}
 
#ifndef ONLINE_JUDGE
    #define debug(x...) cerr << "[" << #x << "] = ["; _print(x);
#else
    #define debug(x...)
#endif
 
// --- 5. MODULAR ARITHMETIC ENGINE ---
struct Mint {
    ll val;
    Mint(ll v = 0) { val = v % MOD; if (val < 0) val += MOD; }
    
    // Operators
    Mint operator+(const Mint& o) const { return Mint(val + o.val); }
    Mint operator-(const Mint& o) const { return Mint(val - o.val); }
    Mint operator*(const Mint& o) const { return Mint(val * o.val); }
    
    // Mod Inverse & Division
    Mint pow(ll exp) const {
        Mint res = 1, base = *this;
        while (exp > 0) {
            if (exp % 2) res = res * base;
            base = base * base;
            exp /= 2;
        }
        return res;
    }
    Mint inv() const { return pow(MOD - 2); }
    Mint operator/(const Mint& o) const { return *this * o.inv(); }
};
class OrderStatisticTree {
private:
    struct Node {
        int val;
        int height;
        int size; // The crucial augmentation
        Node* left;
        Node* right;
        Node(int v) : val(v), height(1), size(1), left(nullptr), right(nullptr) {}
    };
 
    Node* root;
 
    // Utility functions to handle nullptrs gracefully
    int height(Node* n) { return n ? n->height : 0; }
    int size(Node* n) { return n ? n->size : 0; }
    int getBalance(Node* n) { return n ? height(n->left) - height(n->right) : 0; }
 
    // Update the height and size of a node based on its children
    void update(Node* n) {
        if (n) {
            n->height = 1 + max(height(n->left), height(n->right));
            n->size = 1 + size(n->left) + size(n->right);
        }
    }
 
    // AVL Right Rotation
    Node* rotateRight(Node* y) {
        Node* x = y->left;
        Node* T2 = x->right;
        x->right = y;
        y->left = T2;
        update(y);
        update(x);
        return x;
    }
 
    // AVL Left Rotation
    Node* rotateLeft(Node* x) {
        Node* y = x->right;
        Node* T2 = y->left;
        y->left = x;
        x->right = T2;
        update(x);
        update(y);
        return y;
    }
 
    Node* insert(Node* node, int val) {
        if (!node) return new Node(val);
        
        if (val < node->val) node->left = insert(node->left, val);
        else if (val > node->val) node->right = insert(node->right, val);
        else return node; // Duplicates not allowed in this simple set
 
        update(node);
        int balance = getBalance(node);
 
        // Balancing cases
        if (balance > 1 && val < node->left->val) return rotateRight(node);
        if (balance < -1 && val > node->right->val) return rotateLeft(node);
        if (balance > 1 && val > node->left->val) {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }
        if (balance < -1 && val < node->right->val) {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }
        return node;
    }
 
    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current->left != nullptr) current = current->left;
        return current;
    }
 
    Node* erase(Node* root, int val) {
        if (!root) return root;
 
        if (val < root->val) root->left = erase(root->left, val);
        else if (val > root->val) root->right = erase(root->right, val);
        else {
            if (!root->left || !root->right) {
                Node* temp = root->left ? root->left : root->right;
                if (!temp) { temp = root; root = nullptr; }
                else *root = *temp;
                delete temp;
            } else {
                Node* temp = minValueNode(root->right);
                root->val = temp->val;
                root->right = erase(root->right, temp->val);
            }
        }
 
        if (!root) return root;
 
        update(root);
        int balance = getBalance(root);
 
        if (balance > 1 && getBalance(root->left) >= 0) return rotateRight(root);
        if (balance > 1 && getBalance(root->left) < 0) {
            root->left = rotateLeft(root->left);
            return rotateRight(root);
        }
        if (balance < -1 && getBalance(root->right) <= 0) return rotateLeft(root);
        if (balance < -1 && getBalance(root->right) > 0) {
            root->right = rotateRight(root->right);
            return rotateLeft(root);
        }
        return root;
    }
 
    int order_of_key(Node* node, int val) {
        if (!node) return 0;
        
        if (val <= node->val) {
            // Target is smaller or equal, search left branch only
            return order_of_key(node->left, val);
        } else {
            // Target is greater: skip the entire left subtree and the current node
            return size(node->left) + 1 + order_of_key(node->right, val);
        }
    }
 
public:
    OrderStatisticTree() : root(nullptr) {}
    void insert(int val) { root = insert(root, val); }
    void erase(int val) { root = erase(root, val); }
    int order_of_key(int val) { return order_of_key(root, val); }
};
 
// --- 6. SOLUTION SECTION ---
 
void solve_ronit(int tc) {
    Ronit_Security_Vault_2407::verify_integrity();
 
    int n;
    cin >> n;
 
    vpii a(n);
    OrderStatisticTree bs;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        bs.insert(a[i].second);
    }
    sort(all(a));
 
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int pos = bs.order_of_key(a[i].second);
        bs.erase(a[i].second);
        count += pos;
 
    }
    cout << count   << endl;
 
 
    
    
    
}
 
int32_t main() {
    boost_ronit;
    cout << fixed << setprecision(20);
 
    int t = 1;
    if (cin >> t) {
        for (int i = 1; i <= t; i++) {
            solve_ronit(i);
        }
    }
    return 0;
}
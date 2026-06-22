#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
 
class graph
{
    public:
    int v;
    list<int>* l;
 
        graph(int V)
        {
            v = V;
            l = new list<int> [V];
        }
 
        void add_edge(int u, int v)
        {
            l[u].push_back(v);
            l[v].push_back(u);
        }
 
        void delete_graph()
        {
            delete[] l;
        }
 
        void print_adj_list()
        {
            for (int i = 0; i < v; i++)
            {
                 cout << i << ":";
                 for (auto &neigh : l[i])
                 {
                    cout << neigh << ' ';
                 }
                 cout << endl;
                 
            }
            
            
        }
 
        // BFS traversal
        void bfs()
        {
            queue<int> Q;
            vector<bool> visited(v, false);
 
            Q.push(0);
            visited[0] = true;
 
            while (Q.size() > 0)
            {
                int src = Q.front();
                Q.pop();
 
                // do operation with source
                cout << src << ' ';
 
                for (auto &dest : l[src])
                {
                    if (!visited[dest])
                    {
                        visited[dest] = true;
                        Q.push(dest);
                    }
                    
                }
                
            }
            cout << endl;
            
 
        }
 
        // DFS traversal
 
        void dfs()
        {
            int src = 0;
            vector<bool> visited(v, false);
 
            // handle case where the graph is disconnected
            for (int i = 0; i < v; i++)
            {
                if (!visited[i])
                {
                    dfshelper(src, visited);
                }
                
            }
            
            cout << endl;
        }
 
        // cycle detection using DFS
        bool cycle_present_dfs()
        {
            int src = 0;
            vector<bool> visited(v, false);
 
            bool cycle = false;
 
            // handle the case where graph is disconnected
            for (int i = 0; i < v; i++)
            {
                if (!visited[i])
                {
                    cycle =  cycledfshelper(-1, i, visited);
                    if (cycle)
                    {
                        break;
                    }
                    
                }
                
            }
            
            return cycle;
        }
 
        bool cycle_present_bfs()
        {
            vector<bool> visited(v, false);
            int src = 0;
            int src_parent =  -1;
 
            bool cycle = false;
            for (int i = 0; i < v; i++)
            {
                if (!visited[i])
                {
                    queue<pair<int, int>> Q;
                    Q.push({src, src_parent});
                    visited[src] = true;
 
                    while (Q.size() > 0)
                    {
                        pair<int, int> curr = Q.front();
                        // do your thing with curr.first
 
                        // pop the first element
                        Q.pop();
                        for (auto &dest : l[curr.first])
                        {
                            if (!visited[dest])
                            {
                                visited[dest] = true;
                                Q.push({dest, curr.first});
                            }
                            else if (dest != curr.second)
                            {
                                return true;
                            }
                            
                            
                        }
                        
                    }
 
 
                    
                }
 
 
                
            }
            
 
            return false;
        }
 
    private:
 
        void dfshelper(int src, vector<bool>& visited)
        {
            visited[src] = true;
 
 
 
            // do the thing with src node
            cout << src << " ";
 
 
 
            for (auto dest : l[src])
            {
                if (!visited[dest])
                {
                    dfshelper(dest, visited);
                }
                
            }
            
        }
 
        bool cycledfshelper(int parent, int src, vector<bool>& visited)
        {
            visited[src] = true;
 
            for (auto &dest : l[src])
            {
                if (!visited[dest])
                {
                    if(cycledfshelper(src, dest, visited)) return true;
                }
                else if (dest != parent)
                {
                    return true;
                }
                
                
            }
 
            return false;
            
        }
};
 
class list_{
    /*
===========================
   std::list Cheat Sheet
===========================
 
Declaration:
------------
std::list<int> l1(5, 19);
// Creates a list with 5 elements, each initialized to 19 → {19, 19, 19, 19, 19}
 
Element Access:
---------------
l1.front();   // returns first element
l1.back();    // returns last element
 
Modifiers:
----------
l1.clear();         // removes all elements
l1.insert(it, 42);  // insert 42 before iterator 'it'
l1.remove(19);      // remove all elements equal to 19
l1.unique();        // remove consecutive duplicates only
 
Operations:
-----------
l1.sort();          // sort elements in ascending order
l1.reverse();       // reverse the order of elements
l1.merge(l2);       // merge sorted list l2 into l1 (both must be sorted)
 
Iterators:
----------
auto it = l1.begin();   // iterator to first element
auto itEnd = l1.end();  // iterator past the last element (not dereferenceable)
 
// Advance iterator by n steps (modifies iterator in place)
std::advance(it, 3);    
 
// Get a new iterator n steps ahead (does not modify original)
auto it2 = std::next(l1.begin(), 2);  
 
Reverse Iterators:
------------------
auto rit = l1.rbegin();   // reverse iterator to last element
auto rend = l1.rend();    // reverse iterator past first element
 
// Convert reverse iterator to forward iterator
auto itForward = rit.base();  
// Note: rit points to last element, rit.base() points to element AFTER rit
// Example: *rit is last element, rit.base() == l1.end()
 
Quick Notes:
------------
- .remove(val) → deletes all occurrences of val
- .unique() → deletes only consecutive duplicates
- .merge() requires both lists to be sorted
- .advance(it, n) → moves iterator forward/backward by n steps
- .next(it, n) → returns a new iterator n steps ahead
- Reverse iterators: rit.base() is always one step ahead of the element rit refers to
*/
};
 
 
 
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> p(m);
    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }
 
 
    vector<int> ans(n, -1);
 
    vector<bool> inque(m, false);
 
    int j = n - 1;
    for (int i = 0; i < m; i++)
    {
        if (j < 0)
        {
            break;
        }
        
        if (inque[p[i] - n - 1] == false)
        {
            inque[p[i] - n - 1] = true;
            ans[j--] = i + 1;
        } 
        
    }
 
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << ' ';
    }
    
 
    cout << endl;
 
 
    
    
}
 
int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin >> t;
 
    cout << fixed << setprecision(20);
    
    while(t--)
    {
        solve();
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
struct DSU {
    vector<int> parent, sz;
    int sets; 

    DSU() {}

    DSU(int n) {
        init(n);
    }

    void init(int n) {
        sets = n; 
        parent.resize(n + 1);
        sz.assign(n + 1, 1);
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
        int sizeA = size(a); 
        
        if (a == b) return false;

        if (sz[a] < sz[b]) swap(a, b);

        parent[b] = a;
        sz[a] += sz[b];
        int sizeAfter = size(a); 
 
        if(sizeAfter > sizeA) sets--; 
        return true;
    }

    bool same(int a, int b) {
        return find(a) == find(b);
    }

    int size(int x) {
        return sz[find(x)];
    }
   
};

int main()
{
    int n; cin >> n; 
    int m; cin >> m; 
    int biggest = 0; 
    DSU dsu(n); 
    
    while(m--) {
        int a, b; cin >> a >> b;
        dsu.unite(a, b); 
        dsu.find(a); 
        dsu.find(b); 
        biggest = max(dsu.size(a), biggest); 
        cout << dsu.sets << " " << biggest << "\n"; 
    }
    return 0;
}

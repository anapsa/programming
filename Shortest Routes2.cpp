#include <bits/stdc++.h>
#define ll long long
const int MAXN = 1e6 + 5; 
#define INF 0x3f3f3f3f3f3f3f3f
#define pii pair<ll,ll>
#define max 10000000
using namespace std;

int main()
{
    int n; cin >> n;
    int m; cin >> m; 
    int q; cin >> q;

    vector<vector<ll>> graph(n+1, vector<ll>(n+1, INF));
    for(int i=1;i<=n;i++) graph[i][i] = 0; 
    
    for(int i=0; i<m; i++) {
        ll int v, u, w; 
        cin >> v >> u >> w; 
        
        graph[v][u] = min(graph[v][u], w);  
        graph[u][v] = min(graph[u][v], w); 
    }


    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (graph[i][k] < INF && graph[k][j] < INF) {
                    graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
                }
            }
        }
    }

    while(q--) {
        int a, b; 
        cin >> a >> b;
        
        if(graph[a][b] == INF) {
            cout << "-1\n"; 
        } else {
            cout << graph[a][b] << "\n";
        }
    }
 
    return 0;
}

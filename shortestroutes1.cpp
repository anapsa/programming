#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6 + 5; 
#define INF 0x3f3f3f3f3f3f3f3f
#define pii pair<ll,ll>
#define max 10000000

vector<pii> g[MAXN];

vector<ll> dijkstra(int s, int N){
	vector<ll> dist (N, INF);
	priority_queue<pii, vector<pii>, greater<pii>> pq;
	pq.push({0, s});
	dist[s] = 0;

	while(!pq.empty()){
		auto [d, u] = pq.top();
		pq.pop();
		if(d > dist[u]) continue;

		for(auto [v, c] : g[u])
			if( dist[v] > dist[u] + c ){
				dist[v] = dist[u] + c;
				pq.push({dist[v], v});
			}
	}
	return dist;
}

int main()
{
    int n; cin >> n;
    int m; cin >> m; 
    
    for(int i=0; i<m; i++) {
        int v, u, w; 
        cin >> v >> u >> w; 
        g[v-1].push_back({u-1, w}); 
    }
    
    vector<ll> dist = dijkstra(0, n); 
    
    for(int i=0;i<dist.size();i++) {
        cout << dist[i] << " ";
    }

    return 0;
}

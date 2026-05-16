#include <bits/stdc++.h>
using namespace std;

bool bfs(int start, const vector<vector<int>>& adj, vector<int>& team) {
    queue<int> q;
    q.push(start);
    team[start] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (team[v] == 0) {
                if(team[u] == 1) team[v] = 2; 
                else team[v] = 1; 
                
                q.push(v);
            } else if (team[v] == team[u]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n; cin >> n;
    int m; cin >> m; 

    vector<vector<int>> adj(n);

    for (int i=0; i<m; i++) {
        int x, y; cin >> x >> y;
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }

    vector<int> team(n, 0);

    for (int i=0; i<n; i++) {
        if (team[i] == 0) {
            bool pos = bfs(i, adj, team); 
            if (!pos) {
                cout << "IMPOSSIBLE\n";
                return 0;
            }
        }
    }

    for (int i=0; i<n; i++) {
        cout << team[i] << " ";
    }
    cout << "\n";
  
    return 0;
}

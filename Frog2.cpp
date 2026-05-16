#include <bits/stdc++.h> 
#define INF 1410065408

using namespace std;
int frog(vector<int> &minimum, long long int s, int steps, vector<int> h) {
    minimum[0] = 0; 
    for(long long int i=0; i<s; i++) {
        for(long long int j=i+1; j<=i+steps; j++) {
            if(j<s)
                minimum[j] = min(minimum[j], minimum[i] + abs(h[i]-h[j])); 
        }
    }
    return minimum[s - 1]; 
    
}
int main()
{
    long long int s;
    int steps; 
    cin >> s >> steps;
    vector<int> h(s); 
    for(long long int i=0; i<s; i++) {
        cin >> h[i];
    }
    vector<int> m(s, INF); 
    int ans= frog(m, s, steps, h); 
    cout << ans; 
     
    return 0;
}

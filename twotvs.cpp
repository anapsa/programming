#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int n; cin>>n; 
    vector <pair<int, int>> tv;  
    for(int i=0; i<n; i++){
        int first, second; 
        cin >> first >> second; 
        tv.push_back({first, second});  
    }
    sort(tv.begin(), tv.end()); 
    bool conflitos = false;
    pair <int,int> tv1, tv2; 
    tv1 = tv[0]; tv2 = tv[1];
    for(int i=2; i<tv.size(); i++) {
        if(tv[i].first > tv1.second) tv1 = tv[i]; 
        else if(tv[i].first > tv2.second) tv2 = tv[i]; 
        else conflitos = true;
    }
    if(conflitos) cout << "NO";
    else cout << "YES"; 
    
    return 0;
}


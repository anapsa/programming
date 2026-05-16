#include <bits/stdc++.h> 
#define INF 1410065408

using namespace std;

int main()
{
    int n; cin >> n;
    
    for(int i=0;i<n;i++) {
        int t; cin >> t; 
        vector<int> v(t); 
        bool isOrdered = true; 
        int size = t; 
        vector<int> dp(t); 
        for(int j=0;j<t;j++) {
            cin >> v[j]; 
            if(j>0) {
                if(isOrdered && v[j-1] > v[j]) {
                    isOrdered = false; 
                }
            }
        }
        if(!isOrdered) {
            cout << "1\n"; 
        } else {
            cout << t << "\n"; 
        }
    }
      
    return 0;
}

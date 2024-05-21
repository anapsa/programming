            
#include <bits/stdc++.h> 
using namespace std; 
int main() {
    cin.tie(0); 
    ios_base::sync_with_stdio(0);
    int q; 
    cin >> q; 
    while(q--) {
        int n; 
        cin >> n; 
        pair<int, bool> s[11];
        for(int k=0; k<11; k++) {
            s[k].first = 0;
            s[k].second = false;
        }
        bool pos = false; 
        while(n--) {
            int tmp; cin >> tmp; 
            int tmpi = tmp; 
            int i = 0; 
            if(pos == true) continue; 
            while(i < 12 && tmp <= 2048) {
                
                if(tmp == 2048) {
                    pos = true;
                    break; 
                }
                if(tmp != 1) {
                    if(s[int(log2(tmp))].first == 0) {
                        s[int(log2(tmp))].first = tmp;
                        break; 
                    } else if(s[int(log2(tmp))].second == false) {
                       
                        s[int(log2(tmp))].second = true; 
                        tmp += tmp; 
                       
                    } else {
                        s[int(log2(tmp))].second = false; 
                        break; 
                        
                    }
                } else {
                    if(s[0].first == 0) {
                        s[0].first = tmp;
                        break; 
                    } else if(s[0].second == false) {
                        s[0].second = true; 
                        tmp += tmp; 
                        
                    } else {
                        s[0].second = false; 
                        break;   
                    }
                }
                i++;
            }
        } 
        if(pos) cout << "YES\n";
        else cout << "NO\n"; 
    }
    return 0; 
}

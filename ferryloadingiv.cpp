#include <bits/stdc++.h>
using namespace std;
int main() {
    
    cin.tie(0); 
    ios_base::sync_with_stdio(0);
    int cases;
    cin >> cases;
    while(cases > 0) {
        cases--; 
        int l, m;
        cin >> l >> m; l *= 100; 
        string side[m]; 
        int carlen[m], ac = 0, total = 1; 
        queue <int> left; queue <int> right; 
        bool sameside = true;
        for(int i=0; i<m; i++){
            cin  >> carlen[i]>> side[i]; 
            if(side[i] == "left") left.push(carlen[i]); 
            else right.push(carlen[i]); 
        }
        while(right.size() != 0 || left.size() != 0) {
            if(sameside && !left.empty()) {
                if(ac + left.front() <= l){
                    ac += left.front(); 
                    left.pop();
                } else {
                    total++; ac=0;  sameside = !sameside;
                }
            } else if(!sameside && !right.empty()) {
                if(ac+right.front() <= l) {
                    ac += right.front(); 
                    right.pop();
                } else {
                    total++; ac=0; sameside = !sameside;
                }
            } else {
                total++; ac=0; sameside = !sameside;
            }
        }
        cout << total << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std; 
int main()
{
    cin.tie(0); 
    ios_base::sync_with_stdio(0);
    int n; cin >> n; 
    while(n--) {
        int b, sg, sb; 
        cin >> b >> sg >> sb; 
        priority_queue<int> green, blue;
        for(int i=0; i<sg; i++) {
            int p; 
            cin >> p; green.push(p);
        } 
        for(int i=0; i<sb; i++) {
            int p; 
            cin >> p; blue.push(p);
        }
        
        int index = 0; 
        while(!green.empty() && !blue.empty()){
            vector<int> gf, bf; 
            for(int i=0;i<b;i++) { 
                if(green.empty() || blue.empty()) break;
               if(green.top() > blue.top()) {
                   gf.push_back(green.top()-blue.top());  
               } else if(green.top() < blue.top()) {
                   bf.push_back(blue.top()-green.top()); 
               } 
               green.pop(); blue.pop(); 
            }
            for(int i=0; i<gf.size();i++) green.push(gf[i]);
            for(int i=0; i<bf.size();i++) blue.push(bf[i]);
        }
        if(!green.empty()) {
            cout << "green wins\n"; 
            while(!green.empty()) {
                cout << green.top() << endl; 
                green.pop(); 
            }
        } else if(!blue.empty()) {
            cout << "blue wins\n"; 
            while(!blue.empty()) {
                cout << blue.top() << endl; 
                blue.pop(); 
            }
        } else {
            cout << "green and blue died\n"; 
        }
        if(n!=0) cout << "\n"; 
    }
    
    return 0;
}

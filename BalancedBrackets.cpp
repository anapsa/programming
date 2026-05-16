#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int n; cin >> n; 
    while(n--) {
        string s; cin >> s; 
        stack<char> b; 
       
        for(char c : s) {
            if(c == '{' || c == '(' || c == '[') {
                b.push(c); 
            } else if(!b.empty()) {
                if(c == '}') {
                    char v = b.top(); 
                    if(v == '{') b.pop(); 
                    else b.push(c); 
                    
                } else if(c == ']') {
                    char v = b.top(); 
                    if(v == '[') b.pop(); 
                    else b.push(c); 
                    
                } else if(c == ')') {
                    char v = b.top(); 
                    if(v == '(') b.pop(); 
                    else b.push(c); 
                }
                
            } else {
                b.push(c); 
            }
        }
        
        if(b.empty()) {
            cout << "YES\n"; 
        } else {
            cout << "NO\n"; 
        }
        
    }
    
    return 0;
}

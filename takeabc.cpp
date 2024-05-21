#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    cin.tie(0); 
    ios_base::sync_with_stdio(0);
    string str; 
    cin >> str; 
    stack <char> s; 
    int i = 0; 
    char tmp; 
    bool isA = false, isB = false; 
    while (i<str.size()) {
        s.push(str[i]); 
        if(isA && isB && str[i] != 'C') {
            isA = false; isB = false;
        }
        if(str[i] == 'A') {
            isA = true;
        } else if(str[i] == 'B' && isA){ 
            isB = true;
        } else if(str[i] == 'C' && isA && isB) {
            s.pop(); s.pop(); s.pop(); 
            isA = false; isB = false;
            if(s.size() >= 2) {
                if(s.top() == 'B') {
                    isB = true;
                    tmp = s.top(); 
                    s.pop(); 
                    if(s.top() == 'A') isA = true;
                    else isB = false;
                    s.push(tmp); 
                } else if(s.top() == 'A') {
                    isA = true; 
                }
            } else if(s.size() >= 1) {
                if(s.top() == 'A') {
                    isA = true; 
                }
            }
          
        } else {
            isA = false; 
            isB = false; 
        }
        i++;
           
    }
    int tam = s.size(); 
    string aux;
    aux.resize(s.size()); 
  
    for(int j = tam-1; j >= 0; j--) {
        aux[j] = s.top(); 
        s.pop();
    }
    cout << aux << endl; 
    return 0;
}

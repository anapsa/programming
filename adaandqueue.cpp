#include <bits/stdc++.h>
using namespace std; 
int main()
{
    cin.tie(0); 
    ios_base::sync_with_stdio(0);
    deque <int> dq; 
    int change = false; 
    int num; cin >> num; 
    while(num--) {
        string op; cin >> op; 
        if(op == "toFront") {
            int n; cin >> n; 
            if(!change) dq.push_front(n);
            else dq.push_back(n); 
        } else if(op == "front") {
            if(!dq.empty()) {
                if(!change) {
                    cout << dq.front() << endl; 
                    dq.pop_front(); 
                } else {
                    cout << dq.back() << endl; 
                    dq.pop_back(); 
                }
            } else {
                cout << "No job for Ada?\n";
            }
        } else if(op == "reverse") {
            change = !change;
        } else if (op == "back") {
            if(!dq.empty()) {
                if(change) {
                    cout << dq.front() << endl; 
                    dq.pop_front(); 
                } else {
                    cout << dq.back() << endl; 
                    dq.pop_back(); 
                }
            } else {
                cout << "No job for Ada?\n";
            }
        } else if (op == "push_back") {
            int n; cin >> n; 
            if(change) dq.push_front(n);
            else dq.push_back(n); 
        }
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    int teste; 
    while(cin>>teste){
        stack<int> s; priority_queue<int> pq; queue<int> q; 
        bool isstack = true, ispq = true, isqueue = true; 
        for(int i=0; i<teste;i++){
            int op, element, aux; 
            cin >> op >> element;
            if(op == 1) {
                s.push(element); pq.push(element); q.push(element);
            } else if(op == 2) {
                if(!s.empty()){
                    aux = s.top();
                    s.pop();
                    if(aux!=element) isstack = false;  
                } else isstack = false;
                if(!q.empty()){
                    aux = q.front();
                    q.pop();
                    if(aux!=element) isqueue= false; 
                } else isqueue = false;
                if(!pq.empty()){
                    aux = pq.top();
                    pq.pop(); 
                    if(aux!=element) ispq = false; 
                } else ispq = false;
            }
        } 
        if(!ispq && !isqueue && isstack) cout << "stack\n"; 
        else if(!ispq && !isstack && isqueue) cout << "queue\n";
        else if(!isstack && !isqueue && ispq) cout << "priority queue\n"; 
        else if(!isstack && !isqueue && !ispq) cout << "impossible\n";
        else cout << "not sure\n"; 
    }

    return 0;
}

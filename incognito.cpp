#include <bits/stdc++.h>
using namespace std; 
int main()
{
    cin.tie(0); 
    ios_base::sync_with_stdio(0);
    int num;
    cin >> num; 
    while(num--){
        int tam; cin >> tam;
        map<string, int> at; 
        for(int i=0; i<tam; i++) {
            string read1, read2; 
            cin >> read1 >> read2; 
            at[read2]++;
            
        }
        int count = 0;
        for (auto it = at.begin(); it != at.end(); ++it) { 
            count += count * it->second; 
            count += it->second; 
        }
        cout << count << endl;
    }
    return 0;
}

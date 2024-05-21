#include <iostream>
#include <queue> 
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n; 
    while (n!=0) {
        map<vector<int>, int> answer; 
        int max = 0; 
        for(int i=0; i<n; i++) {
            vector<int> temp(5); 
            for(int j=0; j<5; j++) {
                cin >> temp[j]; 
            }
            sort(temp.begin(), temp.end()); 
            
            answer[temp]++; 
            if(answer[temp] > max) {
                max = answer[temp];
            }
           
        }
        int count = 0;
        for(auto it = answer.begin(); it != answer.end(); it++) {
            if(it->second == max) count+=max; 
        }
        cout << count << endl; 
        cin >> n; 
    }
    return 0;
}

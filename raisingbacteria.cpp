#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);
    int in; cin >> in; 
    int result = 0; 
    while(in>=1) {
        if(log2(in) == floor(log2(in))) {
            result += 1; 
            break;
        } else {
            result+=in%2; 
            in = in/2;
        }
    }
    cout << result << endl; 
    return 0;
}

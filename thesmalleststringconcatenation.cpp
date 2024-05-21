#include <bits/stdc++.h>
using namespace std; 
bool cmp(const string &a, const string &b) {
    if(a+b < b+a) {
        return true; 
    } else {
        return false;
    }
}
int main()
{
    cin.tie(0); 
    ios_base::sync_with_stdio(0);
    int num;
    cin >> num;
    string str[num]; 
    for(int i=0; i<num; i++) {
        cin >> str[i]; 
    } 
    sort(str, str+num, cmp); 
    string print = ""; 
    for(int i=0; i<num; i++) {
        print += str[i]; 
    } 
    cout << print; 
    return 0;
}

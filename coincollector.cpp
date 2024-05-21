#include <iostream>
using namespace std;
int main()
{
    int test, n; 
    cin >> test; 
    while(test > 0) {
        test--; 
        cin >> n; 
        int vet[n]; 
        for(int i=0; i<n; i++) cin >> vet[i];
        int max = 0; 
        if(n==1) max = 1;
        int coin = 1; 
        for(int i=0; i<n-1; i++) {
            if(max + vet[i] < vet[i+1]) {
                max = max + vet[i]; 
                coin++; 
            }
        }
        cout << coin << endl; 
        
    }
    return 0;
}

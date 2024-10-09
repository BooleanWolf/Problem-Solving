#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
int arr[N]; 
int prefix_xor[N]; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);  

    int n; cin >> n; 

    prefix_xor[0] = 0; 

    for(int i = 1; i <= n; i++){
        cin >> arr[i]; 
    }

    for(int i = 1; i <= n; i++){
        prefix_xor[i] = prefix_xor[i-1]^arr[i]; 
    } 

    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        int g = prefix_xor[r] ^ prefix_xor[l-1];  
        cout << g << endl; 
    }

    // int testcase;
    // cin >> testcase; 
    
    // while(testcase--){
    // }
    return 0;

}

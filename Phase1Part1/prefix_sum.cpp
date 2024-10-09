#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9; 
int arr[N]; 
int prefix_sum[N]; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n; 
    prefix_sum[0] = 0; 
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
        prefix_sum[i] = prefix_sum[i-1] + arr[i]; 
    }

    int q; cin >> q; 
    while(q--){
        int l, r; cin >> l >> r; 
        cout << prefix_sum[r] - prefix_sum[l-1] << endl; 
    }
    // int testcase;
    // cin >> testcase; 
    
    // while(testcase--){
    // }

}

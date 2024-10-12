#include <bits/stdc++.h>
using namespace std;

const int N = 11;
char s[N]; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int testcase;
    // cin >> testcase; 
    
    // while(testcase--){
    // }

    int n; cin >> n; 
    for(int i = 0; i < n; i++){
        s[i] = i + '1'; 
    }
    cout << s << "\n"; 

    while(next_permutation(s, s+n)){
        cout << s << "\n"; 
    }
    

    
    return 0;

}

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a[] = {1, 2, 2}; 
    
    while(1){
        bool paisi = next_permutation(a, a + 3); 
        if(!paisi) break; 
        for(int i = 0; i < 3; i++){
            cout << a[i] << " "; 
        }
        cout << endl; 
    }

    // int testcase;
    // cin >> testcase; 
    
    // while(testcase--){
    // }
    // return 0;

}

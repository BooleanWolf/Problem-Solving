#include <bits/stdc++.h>
using namespace std;


int a[105]; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }

    int wk = 0; 
    int max_k = 0; 

    for(int i = 2; i < 1005; i++){
        int c = 0; 
        for(int j = 0; j < n; j++){
            if(a[j] % i == 0) c++; 
        }
        if(c> max_k){
            max_k = c; 
            wk = i;
        }
    }

    cout << wk << endl; 


    return 0;

}

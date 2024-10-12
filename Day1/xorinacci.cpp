#include <bits/stdc++.h>
using namespace std;

long long a, b; 

long long xorinacci(long long n){
    if(n == 0) return a; 
    if(n == 1) return b;    

    else {
        return xorinacci(n-1)^xorinacci(n-2); 
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase; 
    
    while(testcase--){
        long long  c; 
        cin >> a >> b >> c; 

        cout << xorinacci(c) << endl; 
    }
    return 0;

}

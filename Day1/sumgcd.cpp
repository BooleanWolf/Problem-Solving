#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n, k; 
    cin >> n >> k; 

    int c = 0; 
    while(n){
        n = n / k; 
        c++; 
    }

    cout << c << "\n"; 
    return 0;

}

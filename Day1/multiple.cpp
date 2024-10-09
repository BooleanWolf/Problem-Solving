#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, k; cin >> n >> k; 
    long long int f = n;
    int c = 0;

    while(f <= k){
        c++; 
        f = f*2; 
    }
    cout << c << endl; 
    return 0;

}

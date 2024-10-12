#include <bits/stdc++.h>
using namespace std;


const int N = 88;
char s[N]; 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase; 
    
    while(testcase--){
        int n;
        cin >> n >> s; 

        int l = strlen(s); 
        bool hbe = next_permutation(s, s+l);  
        if(hbe) {
            cout << n << " " << s << "\n"; 
        }
        else {
            cout << n << " " << "BIGGEST" << "\n"; 
        }
    }
    return 0;

}

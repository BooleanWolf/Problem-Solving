#include <bits/stdc++.h>
using namespace std;


const int N = 1e5 + 9; 
char s[N]; 
int freq[27]; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s; 

    for(int i = 0; i < strlen(s); i++){
        freq[s[i] - 'a']++; 
    }

    for(char i = 'a'; i <= 'z'; i++){
        if(freq[i -'a'] == 0) {
            cout << i << endl; 
            return 0; 
        }
    }

    cout << "None" << endl; 
    return 0;

}

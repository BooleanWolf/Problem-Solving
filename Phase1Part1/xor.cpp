#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n; 
    int arr[n]; 

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    } 

    int ans = 0; 
    int max_c = 0; 
    

    for(int i = 0; i < n; i++){
        int c = 0; 
        for(int j = 0; j < n; j++){
            if(arr[j] % arr[i] == 0) c++; 
        }
        if(max_c < c){
            ans = arr[i]; 
            max_c = c; 
        }
    }

    cout << ans << '\n'; 

}

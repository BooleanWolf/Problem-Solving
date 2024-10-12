#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase; 
    
    while(testcase--){
        bool flag = false; 
        int n, k;
        cin >> n >> k; 
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i]; 
      
        for(int i = 0; i < n; i++){
            int ans = 1; 
            for(int j = i; j < n; j++){
                ans = ans & arr[j]; 
                if(ans < k){
                    if(!flag){
                        cout << "YES" << "\n"; 
                    }
                    flag = true;   
                    break; 
                }
            }
        }
        if(!flag) cout << "NO" << "\n"; 

    }

    
    return 0;

}

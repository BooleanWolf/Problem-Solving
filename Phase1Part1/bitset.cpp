#include <bits/stdc++.h>
using namespace std;

#define PRINT_ARRAY(arr, size)                          \
    do {                                                \
        std::cout << "Array: ";                        \
        for (int i = 0; i < size; ++i) {               \
            std::cout << arr[i] << (i < size - 1 ? ", " : ""); \
        }                                               \
        std::cout << std::endl;                        \
    } while (0)

long long int arr[1000000]; 
long long int arr_sort[10000000]; 
long long int pre_sum[10000000]; 
long long int pre_sum_sort[10000000]; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n; cin >> n; 
    for(long long int i = 0; i < n; i++){
        cin >> arr[i]; 
        arr_sort[i] = arr[i]; 
    }

    sort(arr_sort, arr_sort + n); 

    pre_sum[0] = arr[0]; 
    pre_sum_sort[0] = arr_sort[0]; 


    for(int i = 1;  i < n; i++){
        pre_sum[i] = pre_sum[i-1] + arr[i]; 
        pre_sum_sort[i] = pre_sum_sort[i-1] + arr_sort[i]; 
    }
    // PRINT_ARRAY(arr, n); 
    // PRINT_ARRAY(arr_sort, n); 
    // PRINT_ARRAY(pre_sum, n); 
    // PRINT_ARRAY(pre_sum_sort, n);  


    int q; cin >> q; 

    while(q--){
        int i, j, k; cin >> i >> j >> k; 
        if(i == 1){
            cout << pre_sum[k-1] - pre_sum[j-2] << '\n'; 
        } else if (i == 2){
            cout << pre_sum_sort[k-1] - pre_sum_sort[j-2] << '\n'; 
        }   
       
    }


}

#include<bits/stdc++.h>
using namespace std;

long long zero_to_x_xor(long long x) {
  long long ans = 0;
  while (x >= 0 and x % 4 != 3) {
    ans ^= x;
    x--;
  }
  return ans;
}
long long l_to_r_xor(long long l, long long r) {
  return zero_to_x_xor(r) ^ (l > 0 ? zero_to_x_xor(l - 1) : 0);
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  long long l, r; cin >> l >> r;
  long long ans = 0;
  // for (long long i = l; i <= r; i++) {
  //   ans ^= i;
  // }
  ans = l_to_r_xor(l, r);
  cout << ans << '\n';
  return 0;
}
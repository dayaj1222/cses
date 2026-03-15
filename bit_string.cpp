#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long mod_pow(long long base, long long exp, int mod) {
  long long result = 1;
  while (exp > 0) {
    if (exp % 2 == 1)
      result = (result * base) % mod;
    base = (base * base) % mod;
    exp /= 2;
  }
  return result;
}

int main() {
  int n;
  cin >> n;
  cout << mod_pow(2, n, MOD) << endl;
  return 0;
}

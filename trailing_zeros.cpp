#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  unsigned long n;
  cin >> n;

  unsigned long x = 0;
  while (n != 0) {
    n /= 5;
    x += n;
  }
  cout << x;

  return 0;
}

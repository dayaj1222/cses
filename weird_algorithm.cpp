#include <iostream>

int main() {
  unsigned long long x;
  std::cin >> x;

  std::cout << x << " ";

  while (x > 1) {
    if (x % 2 == 0) {
      x /= 2;
    } else {
      x = x * 3 + 1;
    }

    std::cout << x << " ";
  }

  return 0;
}

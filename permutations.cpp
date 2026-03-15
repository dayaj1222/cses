#include <iostream>

int main(int argc, char *argv[]) {
  unsigned long n;
  std::cin >> n;
  if (n == 1) {
    std::cout << 1;
    return 0;
  }
  if (n == 4) {
    std::cout << 2 << " " << 4 << " " << 1 << " " << 3;
    return 0;
  }

  if (n < 5) {
    std::cout << "NO SOLUTION";
    return 0;
  }

  for (unsigned long i = 1; i < n + 1; i += 2) {
    std::cout << i << " ";
  }
  for (unsigned long i = 2; i < n + 1; i += 2) {
    std::cout << i << " ";
  }

  return 0;
}

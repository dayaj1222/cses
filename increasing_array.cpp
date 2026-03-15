#include <iostream>

int main(int argc, char *argv[]) {
  unsigned long long n;
  std::cin >> n;

  unsigned long long current;
  std::cin >> current;

  unsigned long long next;
  unsigned long long no_of_moves = 0;
  for (unsigned long long i = 1; i < n; i++) {
    std::cin >> next;
    if (next < current) {
      unsigned long long diff = current - next;
      no_of_moves += diff;
      next += diff;
      current = next;
    }
    current = next;
  }
  std::cout << no_of_moves;
  return 0;
}

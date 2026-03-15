#include <iostream>

int main(int argc, char *argv[]) {
  unsigned long long x;
  unsigned long long temp;
  std::cin >> x;
  unsigned long long sum = 0;

  for (unsigned long long i = 1; i < x; i++) {
    std::cin >> temp;
    sum += temp;
  }

  unsigned long long act_sum = x * (x + 1) / 2;

  std::cout << act_sum - sum;

  return 0;
}

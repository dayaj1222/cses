#include <iostream>

typedef unsigned long long longerInt;

longerInt find_possible_ways(longerInt k) {
  if (k == 1)
    return 0;
  if (k == 2)
    return 6;

  longerInt total_pairs = k * k * (k * k - 1) / 2;
  longerInt attacking_pairs = 4 * (k - 1) * (k - 2);
  return total_pairs - attacking_pairs;
}

int main(int argc, char *argv[]) {
  longerInt n;
  std::cin >> n;
  for (longerInt i = 1; i <= n; i++) {
    std::cout << find_possible_ways(i) << "\n";
  }
  return 0;
}

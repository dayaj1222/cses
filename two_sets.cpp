#include <iostream>
#include <vector>

typedef unsigned long long longer;

int main(int argc, char *argv[]) {
  longer n;
  std::cin >> n;

  longer total_sum = n * (n + 1) / 2;
  if (total_sum % 2 != 0) {
    std::cout << "NO";
    return 0;
  }
  std::cout << "YES\n";
  longer half_sum = total_sum / 2;

  longer current_sum = 0;
  std::vector<longer> first_half;
  std::vector<longer> second_half;

  for (longer i = n; i >= 1; i--) {
    if (current_sum == half_sum) {
      second_half.push_back(i);
      continue;
    }
    if (current_sum + i > half_sum) {
      second_half.push_back(i);
      continue;
    }
    current_sum += i;
    first_half.push_back(i);
  }

  std::cout << first_half.size() << "\n";
  for (auto x : first_half)
    std::cout << x << " ";
  std::cout << "\n";

  std::cout << second_half.size() << "\n";
  for (auto x : second_half)
    std::cout << x << " ";
  std::cout << "\n";

  return 0;
}

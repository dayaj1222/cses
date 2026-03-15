#include <algorithm>
#include <iostream>

typedef unsigned long long longint;

void get_the_num(longint row, longint col) {
  longint k = std::max(col, row);
  longint number_at_corner_of_k = k * k - k + 1;

  bool is_even = k % 2 == 0;
  bool lies_in_col = k == col;

  if (lies_in_col && is_even) {
    std::cout << number_at_corner_of_k - (k - row) << " \n";
  } else if (lies_in_col && !is_even) {
    std::cout << number_at_corner_of_k + (k - row) << " \n";
  } else if (!lies_in_col && is_even) {
    std::cout << number_at_corner_of_k + (k - col) << " \n";
  } else {
    std::cout << number_at_corner_of_k - (k - col) << " \n";
  }
}

int main(int argc, char *argv[]) {
  longint t;
  std::cin >> t;
  for (longint i = 0; i < t; i++) {
    longint y, x;
    std::cin >> y >> x;
    get_the_num(y, x);
  }
  return 0;
}

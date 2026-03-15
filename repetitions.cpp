#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::string s;
  std::cin >> s;

  char current = s[0];

  unsigned long long largest_num = 0;
  unsigned long long num = 0;
  for (unsigned long long i = 0; i < s.length(); i++) {
    if (s[i] == current) {
      num++;
    } else {
      if (num > largest_num) {
        largest_num = num;
      }
      current = s[i];
      num = 1;
    }
  }
  if (num > largest_num) {
    largest_num = num;
  }
  std::cout << largest_num;

  return 0;
}

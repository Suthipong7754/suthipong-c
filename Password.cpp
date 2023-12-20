#include <iostream>
#include <string>

bool isValidPassword(const std::string& password) {
  int upper = 0, lower = 0, digit = 0, symbol = 0;
  for (char c : password) {
    if (isupper(c)) upper++;
    else if (islower(c)) lower++;
    else if (isdigit(c)) digit++;
    else symbol++;
  }
  return password.length() >= 3 && password.length() <= 20 && upper >= 1 && lower >= 1 && digit >= 1 && symbol >= 1;
}

int main() {
  std::string password;
  std::cout << "Enter password: ";
  std::cin >> password;
  if (isValidPassword(password)) {
    std::cout << "Valid" << std::endl;
  } else {
    std::cout << "Invalid" << std::endl;
  }
  return 0;
}

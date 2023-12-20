#include <iostream>

int main() {
    int num1, num2;
    
    std::cout << "??????????????????: ";
    std::cin >> num1;
    
    std::cout << "????????????????: ";
    std::cin >> num2;
    
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = static_cast<float>(num1) / num2;
    
    std::cout << "?????: " << sum << std::endl;
    std::cout << "??????: " << difference << std::endl;
    std::cout << "?????: " << product << std::endl;
    std::cout << "?????: " << quotient << std::endl;
    
    return 0;
}


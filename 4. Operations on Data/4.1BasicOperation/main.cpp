#include <iostream>

int main(){
    auto num1 {25};
    auto num2 {5};
    auto add {num1 + num2};
    auto sub {num1 - num2};
    auto multi {num1 * num2};
    auto divide {num1 / num2};
    auto modulus {num1 % 10};

    std::cout << "Number 1: " << num1 << "\n";
    std::cout << "Number 2: " << num2 << "\n";
    std::cout << "Addition: " << add << "\n";
    std::cout << "Subtraction: " << sub << "\n";
    std::cout << "Multiplication: " << multi << "\n";
    std::cout << "Division: " << divide << "\n";
    std::cout << "Remainder: " << modulus << "\n";

    return 0;
}
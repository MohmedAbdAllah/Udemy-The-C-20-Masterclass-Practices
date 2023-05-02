#include <iostream>

int main(){
    auto number1 {85};
    auto number2 {52};

    std::cout<< "number1: " << number1 << std::endl;
    std::cout<< "number2: " << number2 << std::endl;
    std::cout<< "\nCompare Variables\n";
    std::cout << std::boolalpha;
    std::cout<< "number1 < number2: " << (number1 < number2) << std::endl;
    std::cout<< "number1 <= number2: " << (number1 <= number2) << std::endl;
    std::cout<< "number1 > number2: " << (number1 > number2) << std::endl;
    std::cout<< "number1 >= number2: " << (number1 >= number2) << std::endl;
    std::cout<< "number1 == number2: " << (number1 == number2) << std::endl;
    std::cout<< "number1 != number2: " << (number1 == number2) << std::endl;

    //storing the result of comparison in bool variable
    bool result {(number1 < number2)};

    return 0;
}
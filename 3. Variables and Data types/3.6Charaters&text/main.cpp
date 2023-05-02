#include <iostream>



int main(){
    char value {65};
    char val {'a'};

    std::cout << "value = " << value;
    std::cout << "\nThe integer value of value is " << static_cast<int>(value) <<std::endl;

    std::cout << "val = " << val;
    std::cout << "\nThe integer value of val is " << static_cast<int>(val) <<std::endl;
    return 0;
}
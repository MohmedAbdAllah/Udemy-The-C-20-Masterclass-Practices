#include <iostream>


int main(){
    std::cout << sizeof(float) << "\n"; //2 bytes
    std::cout << sizeof(double) << "\n" ;//4 bytes
    std::cout << sizeof(long double) << "\n";//4 bytes

    int num {5};
    int num2 {-5};// this will case error
    std::cout << "the value of number 1 :" << num << "\n";
    std::cout << "the value of number 2 :" << num2 << "\n";
    return 0;
}
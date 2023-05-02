#include <iostream>
#include <iomanip>

int main(){
    std::cout << sizeof(float) << "\n"; //4 bytes
    std::cout << sizeof(double) << "\n" ;//8 bytes
    std::cout << sizeof(long double) << "\n";//16 bytes
    //if there is no letter at the end of floating number that means it will save the number in double memory size.
    //"f" letter at the end of floating number it means save the number in float memory size.
    //"L" letter at the end of floating number it means save the number in long double memort size.
    float num {1.12345678901234567890f}; //"f"it will save first 7 numbers correctly and the remain will be garbage"Precision 7"
    double num2 {1.12345678901234567890};//" "it will save first 15 numbers correctly and the remain will be garbage"Precision 15"
    long double num3 {1.12345678901234567890L};//"L"it will save first 15 numbers correctly and the remain will be garbage"Precision up to 20"

    std::cout << std::setprecision(20);// to display 20 digits after the floating point
    std::cout << "the value of number 1 :" << num << "\n";
    std::cout << "the value of number 2 :" << num2 << "\n";
    std::cout << "the value of number 2 :" << num3 << "\n";

    std::cout << 2.3/0 <<"\n" ; //it will case warning
    std::cout << 0.0 /0.0 << "\n";

    return 0;
}
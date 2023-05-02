#include <iostream>


int main(){
    int num = 15;//Decimal
    std::cout << "Decimal Number: " << num;
    num = 017;//Octal
    std::cout << "\nOctal Number: " << num;
    num = 0x0f;//Hexadecimal
    std::cout << "\nHexa Number: " << num;
    num = 0b00001111;//Binary
    std::cout << "\nBinary Number: " << num;
}
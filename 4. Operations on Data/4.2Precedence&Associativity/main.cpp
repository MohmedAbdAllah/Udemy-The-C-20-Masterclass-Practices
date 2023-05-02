#include <iostream>
//https://en.cppreference.com/w/cpp/language/operator_precedence
int main(){
    int result = 6 + 3 * 8 - 9 / 3 - 2 + 5;

    std::cout << "result :" << result << "\n";

    return 0;
}
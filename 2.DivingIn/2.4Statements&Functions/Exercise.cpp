#include <iostream>


int multiplyNumbers(int firstNum, int secondNum){
 int sum = firstNum * secondNum;
 return sum;
}

int main(){
    int firstNum {5};
    int secondNum {7};

    std::cout<< "First Number: " <<firstNum <<"\nSecond Number: " << secondNum << "\n";

    int multiply = multiplyNumbers(firstNum,secondNum);
    std::cout<< "multiply_result = "<< multiply << "\n";

    multiply = multiplyNumbers(4,17);
    std::cout<< "multiply_result = "<< multiply << "\n";

    return 0;
}
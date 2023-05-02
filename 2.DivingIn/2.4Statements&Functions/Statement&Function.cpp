/************************Block Comment********************
 * Purpose:this file used to explain the Functions and statement.
***********************************************************/
/********************************************************
 * statement : is the basic unit of computation in a cpp program.
 * The statements are executed in order from top to buttom when 
 *   the program is run.
**********************************************************/
/********************************************************
 * functions:
 * return type function name (list of parameters){
 *  statements of function
 * return "value that should return"
 * }
 * Example:
 * int addNumbers(int firstNum, int secondNum){
 *  int sum = firstNum + secondNum;
 *  return sum;
 * }
*********************************************************/
#include <iostream>


int addNumbers(int firstNum, int secondNum){
 int sum = firstNum + secondNum;
 return sum;
}

int main(){
    int firstNum {5};
    int secondNum {7};

    std::cout<< "First Number: " <<firstNum <<"\nSecond Number: " << secondNum << "\n";

    int sum = addNumbers(firstNum,secondNum);
    std::cout<< "Sum = "<< sum << "\n";

    sum = addNumbers(4,17);
    std::cout<< "Sum = "<< sum << "\n";

    return 0;
}
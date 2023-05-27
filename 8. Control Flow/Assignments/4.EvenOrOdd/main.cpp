#include <iostream>

int main(){
    //initialize the variable that will hold the user value
    int userValue {0};
    //Get the user value
    std::cout << "Please type in an integral value : ";
    std::cin >> userValue;
    //check if the value is even or odd
    if((userValue %2) == 0){
        std::cout << userValue << " is Even\n";
    }else{
        std::cout << userValue << " is Odd\n";
    }

    return 0;
}
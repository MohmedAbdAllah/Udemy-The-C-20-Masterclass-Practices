#include <iostream>

int main(){
    int16_t age {0};

    std::cout << "Please type in your age: ";
    std::cin >> age;

    if(age<21){
        std::cout << "Sorry, you are too young for the treatment\n";
    }else if((age >= 21)&&(age<=39)){
        std::cout << "You are eligible for the treatment\n";
    }else if(age>39){
        std::cout << "Sorry, you are too old for the treatment\n";
    }

    return 0;
}
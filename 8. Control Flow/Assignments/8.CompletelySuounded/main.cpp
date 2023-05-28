#include <iostream>

int main(){
    int16_t x_pos {0};
    int16_t y_pos {0};

    std::cout << "Type in your x location : ";
    std::cin >> x_pos;
    std::cout << "Type in your y location : ";
    std::cin >> y_pos;
    if((x_pos >= -10)&&(x_pos <= 10)&&(y_pos >= -5)&&(y_pos <= 5)){
        std::cout << "You are completely surrounded. Don't move!\n";
    }else{
        std::cout << "You're out of reach!\n";
    }
    return 0;
}
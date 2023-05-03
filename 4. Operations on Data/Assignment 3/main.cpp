#include <iostream>


int main(){
    //declare length, width and height variable
    double length {};
    double width {};
    double height {};
    //get the length , width , height from the user
    std::cout << "Length: ";
    std::cin >> length;
    std::cout << "width: ";
    std::cin >> width;
    std::cout << "height: ";
    std::cin >> height;
    //Calculate Base Area and Volume
    double base_area {width * length};
    std::cout << "the base area is: " << base_area << "\n";
    double volume {base_area * height};
    std::cout << "the volume is: " << volume << "\n";

    return 0;
}
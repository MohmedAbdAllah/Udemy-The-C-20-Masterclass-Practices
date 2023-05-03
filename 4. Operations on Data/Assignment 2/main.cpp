#include <iostream>


int main(){
    //initalize celsius variable
    double celsius {};
    //get the number from the user
    std::cout << "Please Enter the celsius degree: ";
    std::cin >> celsius;
    //calculate the fahrenheit degree and save it in fahrenheit variable
    double fahrenheit {(9.0/5) * celsius + 32};

    std::cout << celsius << " Celsius is " << fahrenheit << " Fehrenheit \n";

    return 0;
}
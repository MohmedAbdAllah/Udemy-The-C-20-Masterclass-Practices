/********************************************
 * Purpose:this file used to explain how to input and output data from the program.
***********************************************************/
/*********************************************************
 * std::cerr -> printing errors to the console
 * std::clog -> printing log messages to the console
 * std::getline(std::cin,var_string) -> get line of inputs "with spaces"
**********************************************************/
#include <iostream>
#include <string>

int main(){
    //Printing date
    std::cout << "Hello MO!\n";

    int Mo_age {25};
    std::cout << "Mo age is " << Mo_age << "\n";
    
    //Print error massege
    std::cerr << "Error Message: something goes wrong\n";

    //Print log massege
    std::clog << "Log Message: Something happened\n";

    int age;
    std::string name;
    std::cout << "Please Enter your name and your age:\n";
    //get data from user
    std::getline(std::cin,name);
    std::cin >> age;
    //std::cin >> name >> age;

    std::cout << "your name is "<< name << " and your age is " << age << "\n";
    return 0;
}
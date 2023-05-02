#include <iostream>


int main(){
    bool red_light {false};
    bool green_light {true};
    bool status {};

    for(auto i = 0;i < 2;i++){
        if(status == red_light){
             std::cout << "Stop!\n";
             status = true;
         }
         else if(status == green_light){
             std::cout << "you can move\n";
             status = false;
         }
    }

    std::cout<< std::boolalpha;//to print boolean as "true" or "false" image
    std::cout<< red_light <<"\n";
    std::cout<< green_light <<"\n";

    return 0;
}
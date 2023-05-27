#include <iostream>

int main(){
    uint16_t day_num {0};
    uint16_t pastDays {0};

    std::cout << "Which day is today [1 : Monday,..., 7 : Sunday] :";
    std::cin >> day_num;
    /*std::cout << "How many days have passed up to day : ";
    std::cin >> pastDays;
    if((day_num >= 1)&&(day_num <=7)){
        uint16_t delta = pastDays % 7;

    }*/
    

    switch(day_num){
        case 1:{
            std::cout << "How many days have passed up to day : ";
            std::cin >> pastDays;
            std::cout <<"Today is Monday.\n";
            std::cout << "If we went " << pastDays << " in the past we would hot a ";
        }break;
        case 2:{
            std::cout << "How many days have passed up to day : ";
            std::cin >> pastDays;
            std::cout <<"Today is Tuesday.\n";
        }break;
        case 3:{
            std::cout << "How many days have passed up to day : ";
            std::cin >> pastDays;
            std::cout <<"Today is Wednesday.\n";
        }break;
        case 4:{
            std::cout << "How many days have passed up to day : ";
            std::cin >> pastDays;
            std::cout <<"Today is Thursday.\n";
        }break;
        case 5:{
            std::cout << "How many days have passed up to day : ";
            std::cin >> pastDays;
            std::cout <<"Today is Friday.\n";
        }break;
        case 6:{
            std::cout << "How many days have passed up to day : ";
            std::cin >> pastDays;
            std::cout <<"Today is Saturday.\n";
        }break;
        case 7:{
            std::cout << "How many days have passed up to day : ";
            std::cin >> pastDays;
            std::cout <<"Today is Sunday.\n";
        }break;
        default:{
                std::cout << day_num << " is not a valid day. Bye!\n";
            };
    }

    if((day_num >= 1)&&(day_num <=7)){
        uint16_t day = 7 - (pastDays%7 - (day_num - 1));
        switch (day)
        {
        case 0:
            std::cout << "If we went " << pastDays << " in the past we would hit a Monday\n";
            break;
        case 1:
            std::cout << "If we went " << pastDays << " in the past we would hit a Tuesday\n";
            break;
        case 2:
            std::cout << "If we went " << pastDays << " in the past we would hit a Wednseday\n";
            break;
        case 3:
            std::cout << "If we went " << pastDays << " in the past we would hit a Thursday\n";
            break;
        case 4:
            std::cout << "If we went " << pastDays << " in the past we would hit a Friday\n";
            break;
        case 5:
            std::cout << "If we went " << pastDays << " in the past we would hit a Saturday\n";
            break;
        case 6:
            std::cout << "If we went " << pastDays << " in the past we would hit a Sunday\n";
            break;
        
        default:
            break;
        }

    }

    return 0;
}
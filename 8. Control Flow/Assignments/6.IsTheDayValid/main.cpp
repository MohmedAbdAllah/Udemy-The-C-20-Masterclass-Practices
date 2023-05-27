#include <iostream>

int main(){
    uint16_t day_num {0};

    std::cout << "Which day is today [1 : Monday,..., 7 : Sunday] :";
    std::cin >> day_num;

    switch(day_num){
        case 1:{
            std::cout <<"Today is Monday.Let's have some fun\n";
        }break;
        case 2:{
            std::cout <<"Today is Tuesday.Let's have some fun\n";
        }break;
        case 3:{
            std::cout <<"Today is Wednesday.Let's have some fun\n";
        }break;
        case 4:{
            std::cout <<"Today is Thursday.Let's have some fun\n";
        }break;
        case 5:{
            std::cout <<"Today is Friday.Let's have some fun\n";
        }break;
        case 6:{
            std::cout <<"Today is Saturday.Let's have some fun\n";
        }break;
        case 7:{
            std::cout <<"Today is Sunday.Let's have some fun\n";
        }break;
        default:{
                std::cout << day_num << " is not a valid day. Bye!\n";
            };
    }

    return 0;
}
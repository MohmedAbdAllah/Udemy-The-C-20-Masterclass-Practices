#include <iostream>


int main(){
    int element = 5.2; //will loss data without any warning "assignment Initialization"
    //int element (5.2); // will loss data without any warning "functional Initialization"
    //int element {5.2}; // will case error "braced Initialization"
    std::cout << "element :" << element <<"\n";
    std::cout << "Size of element is " << sizeof(element);
    return 0;
}
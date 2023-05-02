#include <iostream>


int main(){
    auto var1 {12};//signed int
    auto var2 {13.0};//double
    auto var3 {14.0f};//float
    auto var4 {15.0l};//long double
    auto var5 {'e'};//char
    //int modifier suffixes
    auto var6 {123u};//unsigned
    auto var7 {123ul};//unsigned long
    auto var8 {123ll};//long long

    std::cout << sizeof(var1) <<"\t"<< sizeof(var2) <<"\t"<< sizeof(var3) <<"\t"<< sizeof(var4) <<"\t";
    std::cout << sizeof(var5) <<"\t"<< sizeof(var6) <<"\t"<< sizeof(var7) <<"\t"<< sizeof(var8) <<"\n";
    return 0;
}
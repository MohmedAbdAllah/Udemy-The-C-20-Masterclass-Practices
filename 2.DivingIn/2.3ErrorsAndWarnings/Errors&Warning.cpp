/*************************************************
 * Compiler Time Error:
 * ********************
 * when you forget something in code "syntax error".
 * 
 * Runtime Error
 * **************
 * the compilation is going to be succeed ,but when the program run, it will be do
 * something not suppose to be do "logical error" or it will be crash
 * 
 * Warnings
 * *********
 * this is a problem that is not serious enough for the compiler to halt you compilation.
 * But the compiler is telling you "you are doing something that has some problems"
 * and it should fix it before it become a serious problem.

****************************************************/
#include <iostream>
 int main(){

   //Compile time error example
   //std::cout << "Hello \n"
   
   //Runtime error
   /*int value = 7/0;
   std::cout << "value = " << value << "\n";
   */

   //Warning error
   //7/0;

   return 0;
 }
#include "void.h"

 void func_scope(int num)
 {
     num = 20;
     std::cout<<num<<"\n";
     num++;
     std::cout<<num<<"\n";
 }
#include "void.h"

// create global variable
int num = 5;
using std::cout;

int main()
{
    cout<<"Display num value: " <<num<<"\n";

    //int num = 10;
    //cout<<"Main num value: " <<num<<"\n";

    func_scope();

    return 0;
}
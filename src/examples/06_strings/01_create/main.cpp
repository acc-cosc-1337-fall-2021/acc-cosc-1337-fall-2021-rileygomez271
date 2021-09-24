#include <string>
#include <iostream>

using std::string; using std::cout;


int main()
{
    char letter = 'a';

    string alpha = "abcd";
    cout<<"My size: "<<alpha.size()<<"\n";
    cout<<"My length: "<<alpha.length()<<"\n";
    cout<<"Alpha capacity: "<<alpha.capacity()<<"\n";
    cout<<alpha<<"\n";
    cout<<"\nadd e\n";
    alpha.push_back('e');
    cout<<"My length: "<<alpha.length()<<"\n";
    cout<<"Alpha capacity: "<<alpha.capacity()<<"\n";
    cout<<alpha<<"\n";
    


    return 0;
}



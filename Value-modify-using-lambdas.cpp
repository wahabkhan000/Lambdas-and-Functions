#include <iostream>
#include <vector>
using std::cout,std::cin,std::endl,std::string,std::vector;
int main() {
    int input = 0;
    cin>>input;
    auto modify = [input]() {
        return input+10;
    };
    cout<<"modified value by pass by value is: "<<modify()<<endl;
    auto address =[&input]() {
        input*=10;
    } ;
    address();
    cout<<"Modified value by pass by reference is: "<<input<<endl;
    auto f = [&](){
        input+=input;
    };
    f();
    cout<<"Modified value by accessing all elements by reference: "<<input<<endl;
    auto a = [=]() {
        cout<<input<<endl;
    };
    cout<<"Creating read only copies: ";
    a();
}

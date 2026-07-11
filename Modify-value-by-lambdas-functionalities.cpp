#include <iostream>
#include <vector>
using std::cout,std::cin,std::endl,std::string,std::vector;
int main() {
    int value= 0;
    cin>>value;
    auto modify_by_value = [value]() {
        return value+5;
    };
    cout<<"Value after pass by value is: "<<modify_by_value()<<endl;
    auto modify_by_ref = [&value]() {
        value*=10;
    };
    modify_by_ref();
    cout<<"Value after pass by reference in lambda is: "<<value<<endl;
    auto const_copy = [=]() {
        cout<<"The read only copy of value is: "<<value<<endl;
    };
    const_copy();
    auto modify_all_by_ref = [&]() {
       value+=value;
    };
    modify_all_by_ref();
    cout<<"Value after modifying all elements after pass by reference is: "<<value<<endl;
}

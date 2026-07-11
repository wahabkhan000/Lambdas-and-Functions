#include <iostream>
#include <vector>
using std::cout,std::cin,std::endl,std::string,std::vector;
int main() {
    int input = 0;
    cin>>input;
    auto square = [](int value) {
        return value*value;
    };
    cout<<"Square of "<<input<<" is : "<<square(input)<<endl;
    auto cube = [](int value) {
        return value*value*value;
    };
    cout<<"Cube of "<<input<<" is : "<<cube(input)<<endl;
    auto isEven = [](int value) {
        return value%2 == 0;
    };
    if (isEven(input) == true) {
        cout<<"The "<<input<<" is Even"<<endl;
    }
    else {
        cout<<"The "<<input<<" is not Even"<<endl;
    }
}

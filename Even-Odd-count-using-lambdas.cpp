#include <iostream>
#include <vector>
#include <algorithm>
using std::cout,std::cin,std::endl,std::string,std::vector;
int main() {
    int length = 0;
    cin>>length;
    vector<int>input;
    for (int i=0;i<length;i++) {
        int value = 0;cin>>value;
        input.push_back(value);
    }
    cout<<"The number of Even elements in vector is: "<<std::count_if(input.begin(),input.end(),[](int a) {
        return a%2 == 0;
    })<<endl;
    cout<<"The number of Odd elements in vector is: "<<std::count_if(input.begin(),input.end(),[](int a) {
        return a%2 != 0;
    })<<endl;
    cout<<"The number of elements greater then 50 in vector is: "<<std::count_if(input.begin(),input.end(),[](int a) {
        return a>50;
    })<<endl;
    cout<<"The number of elements multiple of 7 in vector is: "<<std::count_if(input.begin(),input.end(),[](int a) {
        return a%7 == 0;
    })<<endl;
}

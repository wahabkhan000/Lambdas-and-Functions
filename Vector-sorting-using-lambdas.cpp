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
    std::sort(input.begin(),input.end(),[](int a,int b) {
        return a<b;
    });
    cout<<"Ascending order:"<<endl;
    for (int x : input) {
        cout<<x<<" ";
    }
    cout<<endl;
    std::sort(input.begin(),input.end(),[](int a,int b) {
        return a>b;
    });
    cout<<"Descending order:"<<endl;
    for (int x : input) {
        cout<<x<<" ";
    }
    cout<<endl;
    std::sort(input.begin(),input.end(),[](int a,int b) {
        if ((a%2)==(b%2)) {
            return a<b;
        }
        return (a%2)!=0;
    });
    cout<<"Odd elements first:"<<endl;
    for (int x : input) {
        cout<<x<<" ";
    }
    cout<<endl;
    std::sort(input.begin(),input.end(),[](int a,int b) {
        if ((a%2)==(b%2)) {
            return a<b;
        }
        return (a%2)==0;
    });
    cout<<"Even elements first:"<<endl;
    for (int x : input) {
        cout<<x<<" ";
    }
}

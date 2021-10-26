#include <iostream>
using namespace std;

#include"stackusingarray.cpp"

int main (){
    StackUsingArray s(4);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    // cout<<s.pop()<<endl;
    // cout<<s.pop()<<endl;

    cout<<s.size()<<endl;
    
    cout<<s.isEmpty()<<endl;
}
#include<iostream>
using namespace std;

int main(){
    // what is a pointer?---> A pointer is a variable 
    // whose value is the address of another variable
    int a=3;
    int* b= &a;
    // &---> (Address of) operator
    // * -->(value at) Dereference  operator
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The value at address b is "<<*b<<endl;

    //pointer to pointer
    int** c= &b;
    cout<<"The address of b is"<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address value_at(value_at(c))  is "<<**c<<endl;
    return 0;

}
#include<iostream>
using namespace std;

class A{
    public:
    virtual void show(){
        cout<<"Base class";
    }
};
class B:public A{
    public:
    void show(){
        cout<<"Derived class";
    }
};

int main(){
    A *bptr;
    A b1;
    bptr=&b1;
    bptr->show();
    return 0;
}
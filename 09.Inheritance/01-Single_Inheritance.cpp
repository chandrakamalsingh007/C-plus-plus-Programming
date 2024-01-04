//single inheritance
#include<iostream>
using namespace std;

class Base
{
protected:
int a;
    
public:
   
};

class Derived:public Base{
    protected:
    int b;
    public:
    void getdata(){
        cout<<"Enter a and b:";
        cin>>a>>b;
    }
    void display(){
        cout<<a+b;
    }

};

int main(){
    Derived d;
    d.getdata();
    cout<<"The sum is ";
    d.display();
    return 0;
    
}
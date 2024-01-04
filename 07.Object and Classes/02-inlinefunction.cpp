#include<iostream>
using namespace std;

class Num{
    int a;
    double c;
    public:
    void read(){
        cout<<"Enter a number:";
        cin>>a;
    }
    inline double cube(){
        c=a*a*a;
        return c;
    }
    void display(){
        cout<<"The cube of "<<a<<" is "<<c<<endl;
    }
};

int main(){
    Num n;
    n.read();
    n.cube();
    n.display();
    return 0;
}
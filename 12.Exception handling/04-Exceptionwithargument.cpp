#include<iostream>
using namespace std;

class Div{
    public:
    int x,y;
    public:
    Div();
    Div(int b){
        y=b;
    }

};
class Number{
    public:
    int c,g;
    public:
    void readnum();
    double division();
};

void Number::readnum(){
    cout<<"Enter two number:";
    cin>>c>>g;
}
double Number::division(){
    if(g==0)
    throw Div(g);
    else
    cout<<"division ="<<c/g<<endl;
}

int main(){
    Number n;
   
    n.readnum();
    try{
        n.division();
        cout<<"sucess..Exeception not occurs.";
        
    }
    catch(Div n)
    {
        cout<<"Error,divison by 0";
    }
}
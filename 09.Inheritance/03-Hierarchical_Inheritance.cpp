#include<iostream>
using namespace std;

class base{
    protected:
    string name;
    
};
class derive1:public base{
    protected:
    string address;
    public:
    void read(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter address:";
        cin>>address;
    }
    void display(){
        cout<<endl<<name<<endl;
        cout<<address;
    }
};
class derive2:public base{
    protected:
    int roll;
    public:
    void get(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter roll no:";
        cin>>roll;
    }
    void show(){
        cout<<endl<<name<<endl;
        cout<<roll;
    }

};

int main(){
    derive1 d1;
    d1.read();
    derive2 d2;
    d2.get();
    d1.display();
    d2.show();
    return 0;
}
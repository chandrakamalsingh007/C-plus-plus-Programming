#include<iostream>
using namespace std;

class base1{
    protected:
    int id;
    public:
    void getdata(){
        cout<<"Enter id:";
        cin>>id;
    }

};
class base2{
    protected:
    string name;
    public:
    void read(){
        cout<<"Enter name:";
       cin>>name;
       
        
    }
};

class derive:public base1,public base2{
    public:
    string address;
    public:
    void read_data(){
        cout<<"Enter address:";
        cin>>address;

    }
    void display(){
        cout<<name<<endl;
        cout<<address<<endl;
        cout<<id<<endl;
    }
};

int main(){
    derive d;
    d.getdata();
    d.read();
    d.read_data();
    cout<<"Details:"<<endl;
    d.display();
    return 0;
}
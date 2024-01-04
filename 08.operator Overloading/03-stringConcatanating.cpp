#include<iostream>
using namespace std;

class demo{
    string s;
    public:
    void getdata(){
        cout<<"Enter string:";
        cin>>s;
    }
    void putdata(){
        cout<<s;
    }

 /*cc = aa + bb;  cc,aa,bb all are objects. operator overloading operate on objects of class
    cc -> return type
    aa -> reference of first object of class demo which works with + -> operator over loading.
    bb -> argument passed as a object in operator overloading.
 */
    demo operator+(demo bb){//demo itself is aa object and bb is argument in operator overloading 
        demo cc;//return type
        cc.s=s+bb.s; //a is itself variable in object aa 
        return cc;
    }
};

int main(){
    demo aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc=aa+bb;//due to operator overloading works on objects it adds the variable of both aa and bb objects.
    cc.putdata();
    return 0;
}
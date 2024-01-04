#include<iostream>
using namespace std;

class demo{
    int a;
    public:
    void getdata(){
        cout<<"Enter a number:";
        cin>>a;
    }
    void putdata(){
        cout<<a<<endl;
    }

 //++ ,-- is unary operator

    void operator++(){//to make is post fix use int in argument
        a=a+1;
    }
    void operator--(){
        a=a-1;
    }
    void operator++(int){//to make is post fix use int in argument
        a=a+1;
    }
    void operator--(int){
        a=a-1;
    }
};

int main(){
    demo aa,bb;
    aa.getdata();
    ++aa;
    aa.putdata();
    aa++;
    aa.putdata();
    bb.getdata();
    --bb;
    bb.putdata();
    bb--;
    bb.putdata();
    return 0;
}
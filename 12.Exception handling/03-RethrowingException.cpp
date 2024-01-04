#include<iostream>
using namespace std;

int division(int x,int y){
    
    try{
        if(y==0)
        throw y;
        else
        cout<<"dividion ="<<x/y<<endl;
    }
    catch(int a){
        cout<<"Inside the function.";
        throw;
    }
}

int main(){
    try{
        division(10,5);
        division(20,0);
    }
    catch(int a){
        cout<<"Inside main.";
    }
    return 0;
}
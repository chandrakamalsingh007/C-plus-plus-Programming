#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;
    try{
        if(x==10){
            throw('x');
        }
        if(x==100){
            throw (1.2);
        }
        else{
            cout<<"The number is integer";
        }
    }
    // catch(char x){
    //     cout<<x<<"is a character.";
    // }
    // catch(double x){
    //     cout<<x<<"is a floating number.";
    // }
    catch(...){
        cout<<"all exceptions are handled.";
    }
    return 0;
}
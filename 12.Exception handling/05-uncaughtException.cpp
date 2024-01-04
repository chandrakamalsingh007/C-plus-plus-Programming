#include<iostream>
using namespace std;

void test_handler(){
    cout<<"\nInside test handler";
}

int main(){
    set_terminate(test_handler);
    try{
        cout<<"\nInside try block";
        throw 10;
    }
    catch(char c){
        cout<<"\nCharacter exception.";
    }
    return 0;
}
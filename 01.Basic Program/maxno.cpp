//macro.cpp
//program show use of macro
#include<iostream>
#define MAX(A,B) (A>B?A:B)
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a;
    cin>>b;
    cout<<"Greater ="<< MAX(a,b);
    return 0;
}
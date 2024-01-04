#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    try{
        if(b!=0){
            c=a/b;
            cout<<"\nDivision ="<<c<<endl;
        }
        else{
            throw(b);
        }
    }
    catch(int b){
        cout<<"Divided by "<<b<<endl;

    }
    return 0;
}
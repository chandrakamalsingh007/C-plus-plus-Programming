//program to illustrate the ternary operator or conditional operator

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter num1:";
    cin>>a;
    cout<<"Enter num2:";
    cin>>b;
    a>b?cout<<a<<" is greater":cout<<b<<" is greater";
    cout<<endl;
    system("pause");
    return 0;
}
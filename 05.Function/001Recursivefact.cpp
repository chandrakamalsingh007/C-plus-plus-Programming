#include<iostream>
using namespace std;
int factorial(int n);
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"The factorial of "<<num<<" is "<<factorial(num);
    return 0;
}

int factorial(int n){
    if(n==1)
{
    return 1;
}
else{
    return n*factorial(n-1);
}}
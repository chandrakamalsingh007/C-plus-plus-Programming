#include<iostream>
using namespace std;

void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){
    int a=4,b=5;
    swap(a,b);
    cout<<a<<" and "<<b<<endl;
    return 0;
}
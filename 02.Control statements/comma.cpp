//program to show use of comma operator
#include<iostream>
using namespace std;
int main(){
    int i,sum;
    for( sum =0,i=1; i<=40;sum+=i,i++);
    cout<<"sum="<<sum;
    return 0;
}
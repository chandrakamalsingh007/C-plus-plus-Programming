//nestedloop.cpp
//program to illustrate nested loop
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1; i<+5;i++){
        cout<<"\n";
        for(j=1;j<=10;j++)
        cout<<"\t"<<i*j;

    }
    return 0;
}
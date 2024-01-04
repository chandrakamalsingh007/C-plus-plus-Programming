#include<iostream>
#include<Cmath>
using namespace std;

int main(){
    int num,digit,reverse=0,i;
    cout<<"Enter a number:";
    cin>>num;
    bool flag=0;
    for(int i=2;i<sqrt(num);i++){
        if(num%i==0)
        cout<<"Non-prime";
        flag=1;
        break;
    }
    if(flag==0){
       cout<<"The number is prime"<<endl;
    }
  
    while(num!=0){

        digit=num%10;
        reverse=reverse*10+digit;
       num=num/10;
    }
    cout<<reverse;
    return 0;
}
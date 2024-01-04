//program to illustrate use of switch statement

#include<iostream>
using namespace std;
int main(){
    int fruit;
    cout<<"Enter the fruit code: ";
    cin>>fruit;
    cout<<"The Fruit is ";
    switch(fruit)
    {
        case 1:
        cout<<"Orange";
        break;
        case 2:
        cout<<"Apple";
        break;
        case 3:
        cout<<"Grape";
        break;
        case 4:
        cout<<"Banana";
        break;
        default:
        cout<<"Fruit not in the list";
    }
    cout<<endl;
    system("pause");
    return 0;
}
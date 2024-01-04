//enumeration example : we can convert any word by its value in which they are arranged
#include<iostream>
using namespace std;
 
 int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = dinner;
    cout<<m1;
    return 0;
}
    
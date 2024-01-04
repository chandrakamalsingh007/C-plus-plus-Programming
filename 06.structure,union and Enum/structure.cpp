//example of structure 
#include<iostream>
using namespace std;

struct student{
    int roll;
    string name;
    string address;
};
int main(){
struct student s1;
s1.roll=10;
s1.name="Chandra Kamal Singh";
s1.address="Bateshwor V.M-05(shantipur)";
cout<<"Name   : "<<s1.name<<endl;
cout<<"Roll No: "<<s1.roll<<endl;
cout<<"Address: "<<s1.address<<endl;
    return 0;
}
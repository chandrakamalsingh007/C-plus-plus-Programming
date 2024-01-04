//conditions or Decision making 
#include<iostream>
using namespace std;

int main(){
	cout<<"Check the person is voter or not\n"<<endl;
	
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	if(age>=18){
		cout<<"You are voter";
		
	}
	else{
		cout<<"You are not a voter";
	}
	return 0;
}

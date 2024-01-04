#include<iostream>
#include<fstream>

#include<conio.h>
using namespace std;
class student{
    int age,crn;//for age and CRN
    char name[40];
    public:
    void getdata(){
        cout<<"Enter student name:";
        cin>>name;
        cout<<"Enter student age:";
        cin>>age;
        cout<<"Enter student CRN:";
        cin>>crn;
    }
    void showdata(){
        cout<<"---------------------------------------------\n";
        cout<<"|  Student name: "<<name<<" |"<<endl;
        cout<<"|   student Age: "<<age<<" |"<<endl;
        cout<<"| student CRN: "<<crn<<" |"<<endl;
    }
    int search(int i){
        if(crn ==i){
            return 1;
        }
        else{
            return 0;
        }
    }
    void showrecord();
    void inputrecord();


};

void student::showrecord(){
    student stu;
    int crn,flag=0;
    fstream file;
    file.open("student.txt",ios::in|ios::out|ios::binary);
    cout<<"Enter student CRN:"<<endl;
    cin>>crn;
    do
    {
        if(stu.search(crn)){
            stu.showdata();
            flag=1;
            break;}/* code */
    } while (file.read((char*)&stu,sizeof(stu)));
    if(flag==0)
        cout<<"Not found"<<endl;
        file.close();
    
}
 void student::inputrecord(){
    student stu;
    fstream file;
    file.open("student.txt",ios::in|ios::out|ios::binary);
    char ch;
    do{
    	cout<<"\nEnter student's information"<<endl;
        stu.getdata();
        file.write((char*)&stu,sizeof(stu));
        cout<<"Enter another student information:";
        cin>>ch;

	}while(ch=='y'||ch=='Y');
	file.close();

}

int main(){
    int n;
    student stu;
    while(1){
        cout<<"1.Input Record."<<endl;
        cout<<"2. Search by student CRN."<<endl;
        cout<<"3.EXIT."<<endl;
        cin>>n;
        switch (n){
            case 1:
            stu.inputrecord();
            break;
            case 2:
            stu.showrecord();
            break;
            case 3:
            exit(0);
            break;
        
        default:
        cout<<"Enter number between 1-3 only"<<endl;
            break;
        }
    }
    return 0;
}

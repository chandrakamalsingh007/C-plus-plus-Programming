//Hollow rectangular
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=(2*n-2);col++){
            if(row==1||row==n||col==1||col==(2*n-2)){
                cout<<"*"<<" ";
            }else{
                cout<<" "<< " ";
            }
        
        }
        cout<<endl;
    }

    
    return 0;
}
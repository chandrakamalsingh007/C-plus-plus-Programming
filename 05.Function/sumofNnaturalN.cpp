#include<bits/stdc++.h>
using namespace std;

int sum1(int n){
    int add=0;
    add=(n*(n+1))/2;
    return add;
}
int sum2(int n){
    int add=0;
    for(int i=1;i<=n;i++){
        add+=i;
    }
    return add;
}


int32_t main(){
    int n;
    cin>>n;
    cout<<sum1(n)<<endl;
    cout<<sum2(n)<<endl;
    return 0;

}
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    cout<<"Value of a "<<a<<endl;
    cout<<"Value of b "<<b<<endl;
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"Value of a "<<a<<endl;
    cout<<"Value of b "<<b<<endl;
    
    return 0;
}
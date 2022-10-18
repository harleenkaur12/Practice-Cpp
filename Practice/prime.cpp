#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=0;
    if(n==0||n==1){
        flag=1;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag){
        cout<<"not prime"<<endl;
    }
    else{
        cout<<"prime"<<endl;
    }
    return 0;
}
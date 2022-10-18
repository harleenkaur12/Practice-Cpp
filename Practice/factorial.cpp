#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"Error";
    }
    else{
        int fact=1;
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
    cout<<fact;

    }
    
    return 0;
}
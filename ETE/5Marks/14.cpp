#include<iostream>
using namespace std;
int main(){
    int n,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d=arr[1]-arr[0];

    for(int i=2;i<n;i++){
        if(arr[i]-arr[i-1]==d){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<"It is in AP "<<endl;
    }
    else{
        cout<<"It is not in AP "<<endl;
    }
    return 0;
}
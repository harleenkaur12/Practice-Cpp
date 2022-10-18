#include<iostream>
using namespace std;
bool isGp(int arr[],int n){
    if(n==1){
        return true;
    }
    int g=arr[1]/arr[0];
    for(int i=2;i<n;i++){
        if(arr[i]/arr[i-1]!=g){
            return false;
        }
    }
    return true;
}
bool isAp(int arr[], int n){
    if(n==1){
        return true;
    }
    int d=arr[1]-arr[0];

    for(int i=2;i<n;i++){
        if(arr[i]-arr[i-1]!=d){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // if(isAp(arr,n)){
    //     cout<<"It is in ap"<<endl;
    // }
    // else{
    //     cout<<"Not ap"<<endl;
    // }
    
    if(isGp(arr,n)){
        cout<<"It is in gp"<<endl;
    }
    else{
        cout<<"Not gp"<<endl;
    }

    return 0;
}
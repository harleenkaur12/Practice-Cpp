#include<iostream>
using namespace std;
int main(){
    int key;
    cin>>key;
    int n;
    cin>>n;
    int arr[n];
    bool present=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            present=1;
        }
    }
    if(present){
        cout<<"Yes, key is present"<<endl;
    }
    else{
        cout<<"No, key is absent"<<endl;
    }
    return 0;
}
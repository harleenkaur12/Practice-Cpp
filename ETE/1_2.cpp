#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    int arr2[4]={2,5,6,7};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i]==arr2[j]){
                cout<<arr2[j];
            }
        }
    }
    return 0;
}
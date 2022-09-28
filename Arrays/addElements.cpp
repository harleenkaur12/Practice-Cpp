#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int arr2[5];
    int count=5;
    int result=0;
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];        
    }
    for (int i = 0; i < count; i++)
    {
        cin>>arr2[i];        
    }
    for (int i = 0; i < count; i++)
    {
        result=result+arr[i];       
    }
    for (int i = 0; i < count; i++)
    {
        result=result+arr2[i];       
    }
    cout<<result;
    return 0;
}
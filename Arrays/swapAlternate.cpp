#include<iostream>
using namespace std;
void printAlternate(int arr[],int n){
    for (int i = 0; i < n; i+=2)
    {
        if((i+1)<n){
            swap(arr[i],arr[i+1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
}
int main(){
    int odd[5]={1,2,3,4,5};
    printAlternate(odd,5);
    
    
    return 0;
}
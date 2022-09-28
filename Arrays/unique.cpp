#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,1,3,4,4};
    int unique=0;
    for (int i = 0; i < 5; i++)
    {
        unique=unique^arr[i];
    }
    cout<<unique;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int result=0;
    while(n!=0){
        int rem=n%10;
        result=10*result+rem;
        n=n/10;
    }
    cout<<result;
    return 0;
}
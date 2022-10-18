#include<iostream>
using namespace std;
int main(){
    int n;
    int p;
    int pow=1;
    cin>>n>>p;
    while(p!=0){
        pow=pow*n;
        p--;
    }
    cout<<pow;
    return 0;
}
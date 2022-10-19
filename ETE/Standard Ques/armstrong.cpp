#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int tem=n;
    int result=0;
    while(n!=0){
        int rem=n%10;
        result=result+rem*rem*rem;
        n=n/10;
    }
    if(result==tem){
        cout<<"ARMSTRONG";
    }
    else{
        cout<<"NOT ARMSTRONG";
    }
    return 0;
}
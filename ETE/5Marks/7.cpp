#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int power=1;
    for(int i=0;i<m;i++){
        power=power*n;
    }
    cout<<power;
    return 0;
}
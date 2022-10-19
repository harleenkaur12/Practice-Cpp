#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int result=max(a,b);
    int flag=1;
    while(flag){
        if(result%a==0 && result%b==0){
            break;
            flag=0;
        }
        result++;
    }
    cout<<result;
    return 0;
}
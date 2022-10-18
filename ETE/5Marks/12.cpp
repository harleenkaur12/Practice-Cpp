#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]=='R'){
            s[i]='S';
        }
        if(s[i]=='r'){
            s[i]=s[i]+1;
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
    return 0;
}
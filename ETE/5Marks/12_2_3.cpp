#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    while(s.find("Sam")!=string::npos){
        s.replace(s.find("Sam"),3,"Ram");
    }
    while(s.find("sam")!=string::npos){
        s.replace(s.find("sam"),3,"ram");
    }
    cout<<s;
    return 0;
}
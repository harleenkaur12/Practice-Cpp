#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    while(s.find("Ram")!=string::npos){
        s.replace(s.find("Ram"),3,"Sam");
    }
    while(s.find("ram")!=string::npos){
        s.replace(s.find("ram"),3,"sam");
    }
    cout<<s;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int len=str.length();
    for (int i = 0; i < len; i++)
    {
        if(i==0){
            str.at(i)=toupper(str.at(i));
        }
        else if(str[i-1]==' '){
            str[i]=toupper(str[i]);
        }
    }
    cout<<str;
    
    
    return 0;
}
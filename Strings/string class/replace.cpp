#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string replaceSpace(string str){
    int l=str.length();
    str.replace(str.begin(), str.end(), " ", "%20");
    return str;
    
}
int main(){

    string str1="Hello World ";
    string str2= replaceSpace(str1);
    cout<<str2;

    
    return 0;
}
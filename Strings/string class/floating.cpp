#include<iostream>
#include<string>
using namespace std;
string floating(string str){
    int pos=str.find(".");
    if(pos==string::npos){
        return "";
    }
    else{
        return str.substr(pos+1); //returns substring from pos+1 until it encounters the null character of the string.
    }
}
int main(){
    string str1="1234.5";
    string floatingPart=floating(str1);
    cout<<floatingPart;
    
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    string str("Gfg");
    string str2("Gfg2");
    //this returns the difference between the size of the strings
    if(str.compare(str2)==0){
        cout<<"Strings are equal";
    }
    else{
        cout<<"Strings are not equal";
    }
    return 0;
}
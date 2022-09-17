#include<iostream>
#include<string.h>//this library includes all c style string functions
using namespace std;
int main(){
    //string has to a c style string
    char str[50];
    cout<<"Enter the string you want to convert to upper case "<<endl;
    cin.getline(str,50);
    cout<<strupr(str);
    
    return 0;
}
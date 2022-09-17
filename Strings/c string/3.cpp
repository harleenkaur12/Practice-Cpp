#include<iostream>
using namespace std;
int main(){
    //difference between a character array and a string
    char a[5]={'a','b','c','d','e'};
    char b[5]={'a','b','c','d','\0'};
    cout<<b;
    char c[]="aabc";//this is always a string only.
    return 0;
}
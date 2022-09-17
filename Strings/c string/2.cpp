#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char string[10];
    cout<<"Input a string to convert to lower case"<<endl;
    cin.getline(string,10);
    cout<<"\nCharacters in lowercase "<<strlwr(string)<<endl;
    return 0;
}
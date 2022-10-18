#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    if (str.find("101")!=string::npos || str.find("010")!=string::npos)
    {
        cout<<"good"<<endl;
    }
    else
    {
        cout<<"bad"<<endl;
    }    
    return 0;
}
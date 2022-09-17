#include<iostream>
#include <string>
using namespace std;
int main(){
    string str1;
    cout<<"Enter a string of your choice "<<endl;
    cin>>str1;
    string rev=str1; //this is important 
    int l=str1.length();
    int j=0;
    for (int i = l-1; i>=0;i--)
    {
        rev[j]=str1[i];
        j++;
    }
    cout<<rev;
       
    return 0;
}
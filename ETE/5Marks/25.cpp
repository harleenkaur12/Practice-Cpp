#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a , b;
    cin>>a>>b;
    if (s == "int")
    {
        cout<<(int)a*b<<endl;
    }
    else if (s == "float")
    {
        cout<<(float)a*b<<endl;
    }
    else if (s == "double")
    {
        cout<<(double)a*b<<endl;
    }
}
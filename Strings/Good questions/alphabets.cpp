#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Please enter a string"<<endl;
    getline(cin,str);
    string next=str;
    int l=str.length();
    for (int i = 0; i < l; i++)
    {
        if((int(next[i]>=65) && int(next[i]<90)) || (int(next[i]>=97) && int(next[i]<122)) ){
            next[i]=str[i]+1;
        }
        else if(int(next[i]==90)|| int(next[i]==122)){
            next[i]=str[i]-25;
        }
        
    }
    cout<<next;
    return 0;
}
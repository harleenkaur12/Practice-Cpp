#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string>m;
    m[1]="Babbar";
    m[2]="Love";
    m[13]="Codes";
    for(auto i:m){
        cout<<i.second<<endl;
    }
    cout<<m.count(1);
    m.erase(13);
    for(auto i:m){
        cout<<i.second<<endl;
    }
    return 0;
}
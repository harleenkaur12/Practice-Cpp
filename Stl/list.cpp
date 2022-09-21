#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(10);
    l.push_back(10);
    for(int i:l){
        cout<<i<<" ";
    }
    l.pop_back();
    for(int i:l){
        cout<<i<<" ";
    }
    l.push_front(12);
    for(int i:l){
        cout<<i<<" ";
    }

    
    return 0;
}
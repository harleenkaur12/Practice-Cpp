#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    
    return 0;
}
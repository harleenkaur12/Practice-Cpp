#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.assign(5,10);
    for (auto i = v.begin(); i !=v.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    v.push_back(5);
    for (auto i = v.begin(); i !=v.end(); i++)
    {
        cout<<*i<<" ";
    }
    v.pop_back();
    cout<<endl;
    for (auto i = v.begin(); i !=v.end(); i++)
    {
        cout<<*i<<" ";
    }
    v.insert(v.begin(),5);
    cout<<endl;
    for (auto i = v.begin(); i !=v.end(); i++)
    {
        cout<<*i<<" ";
    }
    //swap
    vector<int>v1,v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    v2.push_back(10);
    v2.push_back(20);
    

    cout<<endl;
    for (auto i = v1.begin(); i !=v1.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;
    for (auto i = v2.begin(); i !=v2.end(); i++)
    {
        cout<<*i<<" ";
    }

    v1.swap(v2);
    cout<<endl;
    for (auto i = v1.begin(); i !=v1.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;
    for (auto i = v2.begin(); i !=v2.end(); i++)
    {
        cout<<*i<<" ";
    }

    return 0;
}
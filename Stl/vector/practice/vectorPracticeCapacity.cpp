#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>g1;
    for (int i = 1; i <=5; i++)
    {
        g1.push_back(i);
    }
    cout<<"Size "<<g1.size();//number of elements
    cout<<"\nCapacity "<<g1.capacity();//currently allocated memory storage
    cout<<"\nMax size "<<g1.max_size()<<endl;//max elements vector can hold
    
    g1.resize(5);
    cout<<"New size "<<g1.size()<<endl;
    g1.shrink_to_fit();//capacity=size
    for (auto it = g1.begin(); it !=g1.end(); it++)
    {
        cout<<*it<<" "; 
    }
    cout<<g1.capacity()<<endl;
    
    cout<<g1.data()<<endl;
    return 0;
}
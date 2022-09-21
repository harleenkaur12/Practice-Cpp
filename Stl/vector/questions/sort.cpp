#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v{10,1,5,3,7,6,9,7,8};
    sort(v.begin(),v.end(),greater<int>());
    for (auto i=v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    reverse(v.begin(),v.end());
    for (auto i=v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<" ";
        
    }

    return 0;
}
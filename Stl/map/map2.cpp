#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    map<int,int>m1;
    m1.insert(pair<int, int>(1,40));
    m1.insert(pair<int,int>(2,10));
    m1[3]=20;
    int l=m1.size();
    for (int i = 1; i <=l ; i++)
    {
        cout<<m1[i]<<" ";
    }
    
    cout<<m1.count(2);
    
    return 0;
}
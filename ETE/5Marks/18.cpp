#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    vector<int> v;
    for (int i = 1; i < n; i++)
    {
        if (i*i <= n)
        {
            v.push_back(i*i);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    solve(n);
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }
    int b = 5 - n;
    for (int i = 0; i < b; i++)
    {
        cout<<"- ";
    }
    for (int i = 0; i < n; i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
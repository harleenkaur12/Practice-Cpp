#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int hrs, min;
    hrs=n/60;
    min=n-(60*hrs);
    cout<<hrs<<":"<<min;
    return 0;
}
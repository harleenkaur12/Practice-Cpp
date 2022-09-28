#include<iostream>
using namespace std;
template <typename T>T big(T x, T y){
    if(x>y){
        return x;
    }
    if(y>x){
        return y;
    }
}
int main(){
    cout<<big(3,4);
    cout<<big(12.2,6.7);
    cout<<big('a','b');
    
    return 0;
}
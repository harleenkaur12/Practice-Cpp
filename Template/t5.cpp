#include<iostream>
using namespace std;
template<class T>class hero{
    public:
    T health;
};
int main(){
    hero<int>h1;
    h1.health=10;  
    return 0;
}
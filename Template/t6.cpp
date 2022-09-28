#include<iostream>
using namespace std;
template <class T, class V> class hero{
    public:
    V name;
    T health;
    T wealth;
};
int main(){
    hero<int, string>h1;
    h1.health=10;
    h1.name="Hero";
    h1.wealth=20;  
    
    return 0;
}
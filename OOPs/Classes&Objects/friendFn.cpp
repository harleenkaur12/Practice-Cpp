#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A(){
        x=10;
    }
    friend class B; //friend class declaration
};
class B{
    public:
    void display(A &t){ //class A is called here
        cout<<"The value of x is "<<t.x;        
    }
};
int main(){
    A _a;
    B _b;
    _b.display(_a);
    
    return 0;
}
#include<iostream>
using namespace std;
class A{
    public:
    A(){cout<<"This is class A ";}
};
class B: public A{
    public:
    B(){cout<<"This is class B ";}

};
class C: public B{
    public:
    C(){cout<<"This is class C ";}

};
int main(){
    C Obj;
    
    return 0;
}
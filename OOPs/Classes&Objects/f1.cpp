#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(){
        a=0; //friend class
    }
    friend class B;
};
class B{
    int b;
    public:
    void showA(A &x){
        cout<<"A::a"<<x.a;
    }
};
int main(){
    A a;
    B b;
    b.showA(a);
    
    return 0;
}
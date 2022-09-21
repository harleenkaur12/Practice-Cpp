#include<iostream>
using namespace std;
class b{
    public:
    b(){
        cout<<"b"<<endl;
    }
};
class c{
    public:
    c(){
        cout<<"c"<<endl;
    }

};
class a: public c,public b{
    public:
    a(){
        cout<<"a"<<endl;
    }

};
int main(){
    a obj;
    return 0;
}
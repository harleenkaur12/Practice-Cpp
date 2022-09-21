#include<iostream>
using namespace std;
class a{
    public:
    a(){
        cout<<"This comes from the parent class"<<endl;
    }
};
class b: public a{
    public:
    b(){
        cout<<"This comes from the child class"<<endl;
    }
};
int main(){ 
    b obj; 
    return 0;
}
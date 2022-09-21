#include<iostream>
using namespace std;
class a{
    public:
    void display(){cout<<"Hello";}
};
class b:public a{
    public:
    void display(){cout<<"Bye";}
};
int main(){
    b obj;
    obj.display();
    return 0;
}
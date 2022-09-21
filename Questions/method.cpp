#include<iostream>
using namespace std;
class mother{
    public:
    void display(){
        cout<<"Mother"<<endl;
    }
};
class daughter:public mother{
    public:
    void display(){
        cout<<"Daughter"<<endl;
    }
};
int main(){
    daughter d;
    d.display();
    return 0;
}
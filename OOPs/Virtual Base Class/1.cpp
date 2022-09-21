#include<iostream>
using namespace std;
class a{
    public:
    int a;
};
class b:virtual public a{

};
class c:virtual public a{
    
};
class d:public b, public c{

};
int main(){
    d obj;
    obj.a=19;
    cout<<obj.a<<endl;
    return 0;
}
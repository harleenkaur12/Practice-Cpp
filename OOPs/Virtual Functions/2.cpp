#include<iostream>
using namespace std;
class base{
    public:
    void fun_1(){cout<<"base-1\n";}
    virtual void fun_2(){cout<<"base-2\n";}
    virtual void fun_3(){cout<<"base-3\n";}
    virtual void fun_4(){cout<<"base-4\n";}
};
class derived:public base{
    public:
    void fun_1(){cout<<"derived-1\n";}
    void fun_2(){cout<<"derived-2\n";}
    void fun_4(int x){cout<<"derived-4";}
};
int main(){
    base *p;
    derived obj;
    p=&obj;
    //early binding as fun_1 is non-virtual in base
    p->fun_1();

    //late binding as it is virtual
    p->fun_2();
    p->fun_3();
    p->fun_4();


    return 0;
}
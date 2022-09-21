#include <iostream>
using namespace std;
class base
{
public:
    virtual void show() = 0;
};
class derived : public base
{
public:
    void show()
    {
        cout << "In derived" << endl;
    }
};
int main()
{
    // base *bptr=new derived();//dynamic memory allocation
    // bptr->show();
    // return 0;

    base*b;
    derived d;
    b=&d;
    d.show();
}
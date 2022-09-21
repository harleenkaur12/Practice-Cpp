#include<iostream>
using namespace std;
class animal{
    public:
    string name;
    int age;
    void set_value(){
        cout<<"Enter name ";
        getline(cin,name);
        cout<<"Enter age ";
        cin>>age;
    }
};
class zebra:public animal{
    public:
    void message(){
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
    }
};
int main(){
    zebra z;
    z.set_value();
    z.message();  
    return 0;
}
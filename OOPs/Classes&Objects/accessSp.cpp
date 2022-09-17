#include<iostream>
using namespace std;
class geeks{
    //access specifier
    public:
    string geekname;

    //member functions
    void printname(){
        cout<<"Geekname is : "<<geekname;
    }
};
int main(){
    geeks g1;
    g1.geekname="Harleen";
    g1.printname();

    return 0;
}
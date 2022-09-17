#include<iostream>
using namespace std;
class geeks{
    public:
    string geekname;
    int id;

    //outside member function
    void printname();

    //inside member function
    void printid(){
        cout<<"Geek id is: "<<id<<endl;
    }
};
void geeks::printname(){
    cout<<"Geekname is : "<<geekname<<endl; //cannot access private attributes
    }
int main(){
    geeks g1;
    g1.geekname="Harleen";
    g1.id=1234;
    g1.printname();
    g1.printid();
    return 0;
}
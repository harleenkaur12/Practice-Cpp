#include<iostream>
using namespace std;
class geeks{
    string name;
    public:

    void setgname(string name){
        this->name=name;
    }

    void printName(){
        cout<<name;
    }
};
int main(){
    geeks g1;
    g1.setgname("Harleen");
    g1.printName();
    


    

    return 0;
}
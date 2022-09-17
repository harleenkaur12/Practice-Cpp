#include<iostream>
using namespace std;
class geeks{
    public:
    int id;

    //default constructor
    geeks(){
        cout<<"Default constructor"<<endl;
        id=-1;
    }
    //parameterised constructor
    geeks(int x){
        cout<<"Parameterised constructor"<<endl;
        id=x;
    }
};
int main(){
    geeks obj1;
    cout<<"Geek id is "<<obj1.id<<endl<<endl;
    geeks obj2(21);
    cout<<"Geek id is "<<obj2.id<<endl;
    
    return 0;
}
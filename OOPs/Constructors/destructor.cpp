#include<iostream>
using namespace std;
class geeks{
    public:
    int id;

    ~geeks(){
        cout<<"Destructor called for id "<<id<<endl;
    }
};
int main(){
    geeks obj1;
    obj1.id=7;
    int i=0;
    while(i<5){
        geeks obj2;
        obj2.id=i;
        i++;
    }//scope for obj2 ends here

    return 0;
}//scope for obj1 ends here
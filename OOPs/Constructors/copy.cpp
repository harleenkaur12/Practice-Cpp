#include<iostream>
using namespace std;
class sample{
    int id;
    public:
    void init(int x){
        id=x;
    }
    void display(){
        cout<<id<<endl;
    }
};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
int main(){
    //IMPLICIT COPY CONSTRUCTOR
    sample obj1;
    obj1.init(10);
    obj1.display();

    sample obj2=obj1;
    obj2.display();
    return 0;
}
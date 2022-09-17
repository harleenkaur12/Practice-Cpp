#include<iostream>
using namespace std;
class pointed{
    private:
    int x,y;
    public:
    //parameterised
    pointed(int x1, int y1){
        x=x1;
        y=y1;
    }
    //copy
    pointed(const pointed &p1){
        this->x=p1.x;
        this->y=p1.y;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }

};
int main(){
    pointed p1(12,23);//parameterised constructor
    // pointed p2(p1); //copy constructor
    pointed p2=p1; //copy constructor
    cout<<p1.getX()<<" "<<p1.getY()<<endl;
    cout<<p2.getX()<<" "<<p2.getY()<<endl;


    
    return 0;
}
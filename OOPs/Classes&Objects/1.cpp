#include<iostream>
using namespace std;
class hero{
    int health;
    int wealth;

    public:
    void sethealth(int h){
        health=h;
    }
    void setwealth(int w){
        wealth=w;
    }
    void display(){
        cout<<"Health is "<<health<<endl;
        cout<<"Wealth is "<<wealth<<endl;
    }

};
int main(){
    hero h1;
    h1.sethealth(20);
    h1.setwealth(10);
    h1.display();
    
    return 0;
}
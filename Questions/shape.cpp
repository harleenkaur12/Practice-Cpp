#include<iostream>
using namespace std;
class shape{
    private:
    int width;
    int height;
    public:
    shape(int w=0, int h=0){
        this->width=w;
        this->height=h;
    };
    friend int area(shape);
};
class triangle:public shape{

};
class rectangle:public shape{
    public:
    
};
int area(shape s){
        return s.width*s.height;
    }
int main(){
    
    return 0;
}
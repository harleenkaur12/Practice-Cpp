#include<iostream>
using namespace std;
class shape{
    protected:
    int width;
    int height;
    public:
    //if we created a constructor, it won't be accessed by the derived class objects but a setdata function will surely be inherited 
    void setdata(int w, int h){
        this->width=w;
        this->height=h;
    };
};
class triangle:public shape{
    public:
    int area(){
        return width*height/2;
    }
};
class rectangle:public shape{
    public:
    int area(){
        return width*height;
    }
};
int main(){
    triangle t;
    t.setdata(10,20);
    rectangle r;
    r.setdata(12,15);
    cout<<"Area of the triangle "<<t.area()<<endl;
    cout<<"Area of the rectangle "<<r.area()<<endl;
    


    return 0;
}
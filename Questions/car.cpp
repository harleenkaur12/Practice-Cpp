#include<iostream>
using namespace std;
class CarVehicle{
    private:
    int Carcode;
    int CarPrice;
    int CarQuantity;

    public:
    void addData(){
        cout<<"Enter car code "<<endl;
        cin>>Carcode;
        cout<<"Enter car price "<<endl;
        cin>>CarPrice;
        cout<<"Enter car quantity "<<endl;
        cin>>CarQuantity;
    }
    void printQuantity(){
        cout<<"Car quantity is : "<<CarQuantity<<endl;
    }
};
int main(){
    CarVehicle v1[3];
    v1->addData();
    v1->printQuantity();
    
    return 0;
}
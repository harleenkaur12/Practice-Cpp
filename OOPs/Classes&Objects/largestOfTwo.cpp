#include<iostream>
using namespace std;
class largest{
    int a,b,m;
    public:
    void set_data(); //outside member function
    friend void find_max(largest); //friend function 
};
void largest::set_data(){
    cout<<"First ";
    cin>>a;
    cout<<"Second ";
    cin>>b;
}
void find_max(largest t){ //here also we have mentioned the class whose friend this function is. t is the object
    if(t.a>t.b){
        t.m=t.a;
    }
    else{
        t.m=t.b;
        cout<<"Maximum number is "<<t.m;
    }

}

int main(){
    largest l;
    l.set_data();
    find_max(l);  
    return 0;
}
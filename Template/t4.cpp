#include<iostream>
using namespace std;
template<class T>class classname{
    private:
    T var;
    public:
    T max(T x, T y){
        if(x>y){
            cout<<x;

        }
        else{
            cout<<y;
        }
    }
};
int main(){
    classname<int>c1;
    classname<char>c2;
    classname<double>c3;

    return 0;
}
#include<iostream>
using namespace std;
class stack{
    public:
    int*arr;
    int size;
    int top;

    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow";
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow";
        }
        else{
            top--;
        }
    }
    int peek(){
        if(top>=0 && top<size){
            cout<<arr[top];
        }
        else{
            
            cout<<"stack underflow";
            
        }
    }
};
int main(){
    
    return 0;
}
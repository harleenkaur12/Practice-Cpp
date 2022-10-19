#include<iostream>
using namespace std;
class queue{
    public:
    int front,rear,size;
    int *arr;

    queue(int size){
        this->size=size;
        arr=new int[size];
        front=rear=-1;
    }

    void push(int x){
        if(front=-1){
            front++;
            rear++;
            arr[rear]=x;
        }
        else if(rear<size && front!=-1){
            rear++;
            arr[rear]=x;
        }
        else{
            cout<<"queue is full";
        }
    }
    void pop(){
        if(front==rear){
            cout<<"queue is empty";
        }
        else{
            front++;
        }
    }

};

int main(){
    
    return 0;
}
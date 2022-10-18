#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
void insertNode(node*&tail,int element,int d){
    if(tail==NULL){
        node*newnode=new node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        node*curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        node*temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }

} 
int main(){
    
    return 0;
}
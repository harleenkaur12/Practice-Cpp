#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;

    node(int x){
        this->data=x;
        next=NULL;
        prev=NULL;
    }
};
void insertAthead(node*&head,int data){
    node*temp=new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtspecefic(node*&head,int data,int position){
    node*temp=new node(data);
    if(position==0){
        insertAthead(head,data);
        return;
    }
    node*n=head;
    while(position!=NULL){
        n=n->next;
        position--;
    }
    temp->next=n->next;
    n->next->prev=temp;
    n->next=temp;
    temp->prev=n;
    
}

int main(){
    
    return 0;
}
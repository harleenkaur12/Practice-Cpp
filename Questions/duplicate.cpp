#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int x){
        this->data=x;
        next=NULL;
    }

};
void removeduplicates(node*head){
    node*current=head;
    node*next_next;
    if(current==NULL){
        return;
    }
    while(current->next!=NULL){
        if(current->data=current->next->data){
            next_next=current->next->next;
            delete(current->next);
            current->next=next_next;

        }
        else{
            current=current->next;
        }
    }
}
int main(){
    
    return 0;
}
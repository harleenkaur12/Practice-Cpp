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
node*takeInput(){
    node*head=NULL;
    node*tail=NULL;
    int value;
    cout<<"Enter your first value"<<endl;
    cin>>value;
    while(value!=-1){
        node*newnode=new node(value);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cout<<"Enter the next element"<<endl;
        cin>>value;
    }
    return head;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node*insertAtSpecefic(node*head,int position,int value){
    node*newnode=new node(value);
    if(position==0){
        newnode->next=head;
        head=newnode;
        return head;
    }
    node*h1=head;
    //traversal
    while(position!=0){
        h1=h1->next;
        position--;
    }
    node*temp=h1->next;
    h1->next=newnode;
    newnode->next=temp;
    return head;
}

node*deleteNode(node*head,int position){
    node*h1=head;
    while(position!=0){
        h1=h1->next;
        position--;
    }
    node*temp=h1->next;
    h1->next=temp->next;
    temp->next=NULL;
    return head;
}
node*middlenode(node*head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){
    node*head=takeInput();
    
    cout<<middlenode(head)->data;
    // deleteNode(head,2);
     insertAtSpecefic(head,2,3);

    print(head);

    return 0;
}
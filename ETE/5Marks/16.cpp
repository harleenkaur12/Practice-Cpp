#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};

node* RemoveDuplicate(node* head){
    set<int> s;
    while (head != NULL)
    {
        s.insert(head->data);
        head = head->next;
    }
    node* h1 = NULL;
    node* t1 = NULL;
    for(auto it : s){
        node* newnode = new node(it);
        if(h1 == NULL){
            h1 = newnode;
            t1 = newnode;
        }
        else
        {
            t1->next = newnode;
            t1 = newnode;
        }
    }
    return h1;
}

int main(){

}
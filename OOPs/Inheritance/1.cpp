#include<iostream>
using namespace std;
class person{
    int id;
    char name[100];

    public:
    void set_p(){
        cout<<"Enter the id ";
        cin>>id;
        fflush(stdin);
        cout<<"Enter the name ";
        cin.getline(name,100);
    }
    void display_p(){
        cout<<"\t"<<id<<"\t"<<name;
    }
};
class student: private person{
    char course[50];
    int fee;

    public:
    void set_s(){
        set_p();
        cout<<"Enter the course name ";
        fflush(stdin);
        cin.getline(course,50);
        cout<<"Enter the course fee ";
        cin>>fee;
    }
    void display_s(){
        display_p();
        cout<<"\t"<<course<<"\t"<<fee;
    }

};
int main(){
    student s;
    s.set_s();
    s.display_s();
    // s.display_p(); cannot be done as it is inaccessible
    
    return 0;
}
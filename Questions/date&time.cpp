#include<iostream>
using namespace std;
class date{
    public:
    int day;
    int month;
    int year;

    void setDate(){
        cout<<"Enter the day "<<endl;
        cin>>day;
        cout<<"Enter the month "<<endl;
        cin>>month;
        cout<<"Enter the year "<<endl;
        cin>>year;
    }
    void showDate(){
        cout<<day<<" "<<month<<" "<<year<<endl;
    }
};

class time{
    public:
    int hours;
    int minutes;
    void setTime(){
        cout<<"Enter hours "<<endl;
        cin>>hours;
        cout<<"Enter minutes "<<endl;
        cin>>minutes;
    }
    void showTime(){
        cout<<hours<<" : "<<minutes<<endl;
    }
    int minutes(){
        int min=minutes+(hours*60);
        return min;
    }
};
int main(){

    
    return 0;
}
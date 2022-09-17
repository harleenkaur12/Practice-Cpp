#include<iostream>
#include<string>
using namespace std;
int main(){
    string str("The geeks for geeks");
    cout<<"The first occurence of 'geeks' is "<<str.find("geeks")<<endl;
    cout<<"The last occurence of 'geeks' is "<<str.rfind("geeks")<<endl;

    cout<<"First occurence of character from 'reef' is"<<str.find_first_of("reef")<<endl;
    cout<<"Last occurence of character from 'reef' is "<<str.find_last_of("reef")<<endl;

    //insert
    str.insert(4,"Great ");//attributes are the position and substring to be inserted
    cout<<str;


    
    return 0;
}
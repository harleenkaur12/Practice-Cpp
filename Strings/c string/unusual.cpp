#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3};
    //character array
    char b[]="abc";
    cout<<a<<endl;//prints an address
    cout<<b<<endl;//prints the entire char array until a null character is encountered

    //character 
    char c='$'; 
    char*p=&c;
    cout<<p<<endl;//prints $ then some garbage value until null character is obtained.

    char arr[]="xyz";
    cout<<arr<<endl;//const *char overload is called
    cout<<*arr<<endl;//simple dereferencing takes place
    cout<<arr[0]<<endl;//simple 
    return 0;
}
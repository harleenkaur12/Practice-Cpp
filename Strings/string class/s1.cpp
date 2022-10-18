#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1("first string");//initialisation of raw string
    string str2(str1);//initialiation by another string; copy constructor
    string str3(5,'%');//no. of characters and first character
    string str4(str1,6,6);//copy constructor; from 6th character; 6 characters
    string str5(str2.begin(), str2.begin()+5);

    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<str4<<endl;
    cout<<str5<<endl;

    //assignment operator 
    string str6=str4;

    //assignment operator vs copy constructor
    // string str7(str6);
    // string str7=str6;
    cout<<str6<<endl;

    str6.clear();
    cout<<str6<<endl;

    //length of string
    cout<<str1.length()<<endl;
    
    //character at particular position
    cout<<str1.at(1)<<endl;

    //front back characters
    cout<<str1.front()<<endl;
    cout<<str1.back()<<endl;

    // c_str returns null terminated char array version of string
    const char* charstr=str1.c_str();
    cout<<charstr<<endl;

    //append
    str1.append(" of this file");
    cout<<str1<<endl;
    //cout<<str1.append)" of this file" also works perfectly fine

    str2.append(str1,0,6);//appends str1's part from 0th index to 6th index
    cout<<str2<<endl;

    cout<<str2.find("string")<<endl;//returns the first index where it encounters the pattern we are searching for
   
    cout<<str1.empty();//returns whether str1 is empty or not

    //substrings
    cout<<str1.substr(6,4)<<endl; //returns substring from 6th index containing 4 elements
    cout<<str1.substr(7)<<endl; //returns substring from given index untill null character is encountered
    cout<<str1.substr(7).length()<<endl;

    cout<<str1.erase(2,3)<<endl;//erases 3 elements from second index
    
    cout<<str1.replace(2,7,str3)<<endl;

    cout<<str1.empty();
    

    











 
    return 0;
}
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     char str[100];
//     char rev[100];
//     cout<<"Enter a string"<<endl;
//     cin.getline(str,100);
//     int length=strlen(str);
//     int i=0;
//     for (int j = length-1; j>=0; j--)
//     {   
//         rev[i]=str[j];
//         i++;        
//     }
//     cout<<rev;
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    string b=a;
    int l=a.length();
    int j=0;
    for (int i=l-1; i >= 0; i--)
    {
        b[j]=a[i];
        j++;
    }
    cout<<b;
    return 0;
}
#include<iostream>
using namespace std;
string replaceBlankWith20(string str)
{
    string replaceby = "%20";
    int n = 0;
  
    // loop till all space are replaced
    while ((n = str.find(" ", n)) != string::npos )
    {
        str.replace(n, 1, replaceby);
        n += replaceby.length();
    }
    return str;
}
int main(){
    
    return 0;
}
#include <iostream>
using namespace std;
bool containsOnlyDigits(string str)
{
    int l = str.length();
    for (int i = 0; i < l; i++)
    {
        if (str.at(i) < '0' || str.at(i) > '9')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str1 = "1234";
    bool digit = containsOnlyDigits(str1);
    cout << digit;
    return 0;
}
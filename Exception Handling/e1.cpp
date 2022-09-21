#include <iostream>
using namespace std;
int main()
{
    try
    {
        try
        {
            throw 20;
        }
        catch (int n)
        {
            cout << "Handle partially ";
            throw; // rethrowing an expression
        }
    }
    catch (int n)
    {
        cout << "Handle remaining" << endl;
    }
    return 0;
}
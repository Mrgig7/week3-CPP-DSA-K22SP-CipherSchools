#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    string c, d;

    cin >> a >> b;
    c = a + b; // string concatenation
    cout << "The strings which you have given as input are: " << a << " " << b << endl;
    cout << "The combined word is: " << c << endl;
    cout << "Length of combined word: " << c.length() << endl;
    cout << "d: " << d;
    /*
    string d;
    getline(cin, d);   // insted of using cin, you use something call as getline

    //getline is function which is why you can see (), (cin, variable name)
    cout << d;
    */
    return 0;
}
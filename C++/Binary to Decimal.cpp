#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string s1;
    cout << "Enter a binary number : ";
    cin >> s1;
    int len = s1.length() - 1, i, dec = 0;
    i = len;
    while (i >= 0)
    {

        int x = (s1[i] - '0');
        dec = dec + x * pow(2, i);
        i = i - 1;
    }
    cout << "Decimal value = " << dec;
    return 0;
}

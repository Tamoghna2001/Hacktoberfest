/*Program to print all the prime factors of a given number
 output :
 Enter a number : 10
 Prime factors are : 2   5

*/
#include <iostream>
using namespace std;
void all_primes(int n);
int main()
{

    int a;
    cout << "Enter a number : ";
    cin >> a;
    all_primes(a);
    return 0;
}

void all_primes(int n)
{
    int i;
    cout << "Prime factors are : ";
    for (i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << "   ";
            n = n / i;
        }
    }
    if (n > 1)
        cout
            << n;
    cout << endl;
}

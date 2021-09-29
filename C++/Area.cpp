#include <iostream>

using namespace std;

int a, b, c, d, y;

int main()
{
    cout << "Enter Length" << endl;
    cin >> a;
    cout << "Enter breadth"<< endl;
    cin >> b;
    cout << "Enter radius"<<endl;
    cin >> c;
    cout << "Enter height"<< endl;
    cin >> d;

    y = 3.14 * c * c;

    cout << "The area of the rectangle is " << a*b << " square units." << endl;
    cout << "The area of the triangle is " << (a*b)/2 << " square units." << endl;
    cout << "The area of the circle is " << y << " square units." << endl;
    cout << "The area of the square is " << a * a << " square units." <<endl;
    cout << "The circumference of the circle is " << 2 * 3.14 * c << "units." << endl;

    cout << endl;

    cout << "This will calculate the area of rectangle, triangle and square." << endl;


    return 0;
}

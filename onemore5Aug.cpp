#include <iostream>
using namespace std;
;
inline int square(int a)
{
    return a*a;
}
inline int rectangle(int l, int b)
{
    return l*b;
}
inline float triangle(int b, int h)
{
    return 0.5*b*h;
}
inline float circle(float r)
{
    return 3.14*r*r;
}
int main()
{
    float r, bs, h;
    int l, b, s;
    cout << "Enter the side of the square:";
    cin >> s;
    cout << "enter the length and breadth of rectangle :";
    cin >> l >> b;
    cout << "Enter the base and height of triangle :";
    cin >> bs >> h;
    cout << "Enter the radius of circle:";
    cin >> r;
    cout << "the area of square is " << square(s) << endl;
    cout << "the area of rectangle is " << rectangle(l, b) << endl;
    cout << "the area of triangle  is " << triangle(bs, h) << endl;
    cout << "the area of circle is " << circle(r) << endl;
    return 0;
}
#include <iostream>
using namespace std;

class dist 
{
    private:
    int feet;
    int inch;

    public:

    void getInfo(void)
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inch;
    }

    void display(void)
    {
        cout << "Feet:" << feet << "\t"
        << "Inches:" << inch << endl;
    }

    dist operator+(dist& dist1)
    {
        dist D;
        D.inch = inch + dist1.inch;
        D.feet = feet + dist1.feet + (D.inch / 12);
        D.inch = D.inch % 12;
        return D;
    }
};

int main()
{
    dist D1, D2, D3;

    cout << "Enter first distance:" << endl;
    D1.getInfo();
    cout << endl;

    cout << "Enter second distance:" << endl;
    D2.getInfo();
    cout << endl;

    D3 = D1 + D2;

    cout << "Total Distance:" << endl;
    D3.display();

    return 0;
}



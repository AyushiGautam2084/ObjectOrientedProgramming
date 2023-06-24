#include <iostream>
using namespace std;

class Integer
{
    int *array;
    public:
    Integer()
    {
        array = new(int);
        
    }
    int *getArray(){
        return array;
    }
    friend istream& operator << (istream& input, int* a);
    friend ostream& operator >> (ostream& output, int* a);
};

istream& operator << (istream& input, int *a)
{
    int n;
    cout << "Enter the number of array elements you want to input: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the array element: ";
        cin >> a[i];
    }
}
ostream& operator >> (ostream& output, int *a)
{
    int n;
    cout << "Enter the number of array elements to display: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "The array element is : ";
        cout <<  a[i]<<"\n";
    }
}

int main()
{
    Integer i;
    int *x = i.getArray();
    cin << x;
    cout >> x;
    return 0;
}
#include <iostream>
using namespace std;

class Integer 
{
private:
	int real;
    int imag;

public:
	// Parameterised constructor
	Integer(int imag = 0, int real = 0)
	{
		this->imag = imag;
        this->real = real;
	}

	// Overloading the postfix operator
	Integer operator++(int)
	{
		real++;
        ++imag;
	}
    Integer operator +(Integer c)
    {
        Integer temp;
        temp.real = real+c.real;
        temp.imag = imag+c.imag;
        return temp;
    }

	// Function to display the value of i
	void display()
	{
		cout << real<<"+" << imag <<"i"<<endl;
	}
};

// Driver function
int main()
{
	Integer i1(3,4);
    Integer i2(2,7);

	cout << "Before addition:\n";
	i1.display(); 
    i2.display();
    Integer i3 = i1+i2;
    cout<<"After Addition:";
    i3.display();

	// Using the post-increment operator
	//Integer i3 = i1+i2;

	cout << "After increment: ";
    i3++;
	i3.display();
}

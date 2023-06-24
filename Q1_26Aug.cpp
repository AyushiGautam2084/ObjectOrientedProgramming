#include <iostream>

using namespace std;

class change 
{
	int temp, i, j;

    public:
	change(int i, int j)
	{
		this->i = i;
		this->j = j;
	}
	friend void Change(change&);
};

void Change(change& swap)
{
	swap.temp = swap.i;
	swap.i = swap.j;
	swap.j = swap.temp;
	cout << "\nAfter Swapping: " << swap.i << " " << swap.j;
}

int main()
{
	int a,b;
    cout<<"Enter the numbers:";
    cin>>a>>b;
    change e(a, b);
	Change(e);
	return 0;
}

#include <iostream>
using namespace std;
class Dist
{
	private:
		int feet;
		int inch;
	public:
		void values()
		{
			cout<<"Enter feet: ";
			cin>>feet;
			cout<<"Enter inches: ";
			cin>>inch;
		}
		void print()
		{
			cout<<"Distance is "<<feet<<" feet and "<<inch<<" inches"<<endl;
		}		
		void add(Dist d1, Dist d2)
		{
			feet = d1.feet + d2.feet;
			inch = d1.inch + d2.inch;
			feet = feet + (inch / 12);
			inch = inch % 12;
		}
};
int main()
{
	Dist d1, d2, d3;
	d1.values();
	d2.values();
	d3.add(d1, d2);
	d3.print();
	return 0;
}
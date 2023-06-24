#include <iostream>
using namespace std;

class feet_inch
{
    private:
        int feet;
        int inches;
    public:
        feet_inch(int feet,int inches)
        {
            this->feet=feet;
            this->inches=inches;
        }


        int giveFeet()
        {
            return this->feet;
        }
        int giveInch()
        {
            return this->inches;
        }
};


class meter_centi
{
    private:
        int meter;
        int centimeter;
    public:
        meter_centi(int meter,int centimeter)
        {
            this->meter=meter;
            this->centimeter=centimeter;
        }
        int giveMeter()
        {
            return this->meter;
        }
        int giveCenti()
        {
            return this->centimeter;
        }

        int compare(feet_inch feetInch)
        {
            float sumMtrCenti=this->meter*100+this->centimeter;
            float sumFeetInch=feetInch.giveFeet()*30.48 + feetInch.giveInch()* 2.54;
            if(sumMtrCenti>sumFeetInch)
            {
                return 1;
            }
            if(sumMtrCenti<sumFeetInch)
            {
                return 2;
            }
            else
            { 
                return 0;
            }
        
        }
};
 


int main()
{
	int feet,inches,meter,centimeter;
	cout<<"Enter feet: ";
	cin>>feet;
	cout<<"Enter inches: ";
	cin>>inches;
	cout<<"\nEnter meter: ";
	cin>>meter;
	cout<<"Enter centimeter: ";
	cin>>centimeter;
	feet_inch feetInch(feet,inches);
	meter_centi mtrCenti(meter,centimeter);
	if(mtrCenti.compare(feetInch)==1)
    {
		cout<<"\nMeter and centimeter are larger than feet and inches\n";
	}
	if(mtrCenti.compare(feetInch)==2)
    {
		cout<<"\nFeet and inches are larger than meter and centimeter\n";
	}
	if(mtrCenti.compare(feetInch)==0)
    {
		cout<<"\nFeet and inches are equal to meter and centimeter\n";
	}
	return 0;
}









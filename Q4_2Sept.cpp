#include <iostream>
using namespace std;
class order 
{
    private:
    int i;
    public:
    order(int ii = 0) : i(ii)
    {
        cout << "Constructor number " << i << " called"<< endl;
    }
    ~order()
    {
        cout << "Destructor number " << i << " called "<< endl;
    }
};

int main()
{
    order a1(1);
    order a2(2);
}
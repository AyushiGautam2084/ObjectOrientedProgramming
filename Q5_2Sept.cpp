#include <iostream>
using namespace std;
class aClass
{
    private:
    static int count;
    public:
    aClass() 
    {
        cout << "Constructor called" << endl;
        count++;
    } 
    static int num() 
    {
        return count;
    }
};
int aClass::count;
int main() 
{
    aClass a, b, c, d;
    int i;
    i = aClass::num();
    cout << "Number of objects called are " << i;
}
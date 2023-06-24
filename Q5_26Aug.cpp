#include <iostream>
 
using namespace std;

class books
{
    private:
        string Name;
        string Author;
        float price;
    public:
    friend void show(int n);
        books(){}
        books(string n,string a, float i)
        {
            Name = n;
            Author = a;
            price = i;
        }
        void input(string n,string a, float i)
        {
            Name = n;
            Author = a;
            price = i;
        }

        string giveName()
        {
            return Name;
        }
        string giveAuthor()
        {
            return Author;
        }
        float givePrice()
        {
            return price;
        }
        void data()
        {
            cout<<"Book name: "<<Name<<endl;
            cout<<"Author Name: "<<Author<<endl;
            cout<<"Price: "<<price<<endl;

        }

};
void show(int n)
{
    string Name, Author;
    float price;
    books b[n];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter name of the book:";
        cin>>Name;
        cout<<"Enter name of the author:";
        cin>>Author;
        cout<<"Enter the price:";
        cin>>price;
        b[i].input(Name,Author,price);
    }
    cout<<"Printing details of the books\n";
    for(i=0;i<n;i++)
    {
        b[i].data(); 
    }
}

int main()
{
    int i;
    cout<<"Enter number of books:";
    cin>>i;
    show(i);
}
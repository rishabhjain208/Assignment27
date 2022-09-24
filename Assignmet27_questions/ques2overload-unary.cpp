#include<iostream>
using namespace std;
class unary
{
private:
    int a,b;        
public:
    void set(int x, int y)
    {
        a=x;
        b=y;
    }
    void dis()
    {
        cout<<"Value of a and b before incerment and decrement \n";
        cout<<"value of a : "<<a<<" and value of b : "<<b<<endl;
    }
    unary operator++()
    {
        unary temp;
        cout<<"Prefix Incerment operator\n";
        temp.a=++a;
        temp.b=++b;
        return temp;

    }
    unary operator--()
    {
        unary temp;
        cout<<"Prefix Decerment operator\n";
        temp.a=--a;
        temp.b=--b;
        return temp;

    }
    void display()
    {
        cout<<"Value of a and b after incerment and decrement \n";
        cout<<"value of a : "<<a<<" and value of b : "<<b<<endl;
    }
};
int main()
{
    unary u1,u2;
    u1.set(2,3);
    u1.dis();
    (++u1).display();
    (--u1).display();
    return 0;
}
#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void set(int x , int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"real : "<<a<<" img : "<<b<<endl;
    }
    friend complex operator+(complex,complex);
};
complex operator+(complex c1 , complex c)
{
    complex temp;
    temp.a=c1.a+c.a;
    temp.b=c1.b+c.b;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.set(2,3);
    c2.set(5,6);
    c1.display();
    c2.display();
    c3=c1+c2;
    cout<<"Sum of above values \n";
    c3.display();
    return 0;
}


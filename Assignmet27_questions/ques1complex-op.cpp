#include<iostream>
using namespace std;
class Complex
{
private :
    int a,b;   
public:
    void set(int x, int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"real : "<<a<<" img : "<<b<<endl; 
    }
    Complex operator+(Complex c)
    {
        cout<<"\nAddition of given Complex number\n\n";
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    Complex operator-(Complex c)
    {
        cout<<"\nSubraction of given Complex number\n\n";
        Complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return temp;
    }
    Complex operator*(Complex c)
    {
        cout<<"\nMultiplication of given Complex number\n\n";
        Complex temp;
        temp.a=a*c.a;
        temp.b=b*c.b;
        return temp;
    }
    Complex operator==(Complex c)
    {
        Complex temp;
        cout<<"Equal to operator \n ";
        temp.a=a=c.a;
        return temp;
    }
    void dis()
    {
        cout<<"Equal\n";
    }
};
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    cout<<"Complex Number Values \n\n ";
    c1.set(10,15);
    c2.set(5,6);
    c1.display();
    c2.display();
    c3=c1+(c2);
    c3.display();
    c4=c1-(c2);
    c4.display();
    c5=c1*(c2);
    c5.display();
    c6==c5;
    return 0;
}
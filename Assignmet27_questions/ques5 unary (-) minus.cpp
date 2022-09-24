#include<iostream>
using namespace std;
class Minus
{
private:
    int x,y,z;
public:
    void input()
    {
        cout<<"Enter the First numbers : ";
        cin>>x;
        cout<<"Enter the Second numbers : ";
        cin>>y;
        cout<<"Enter the Third numbers : ";
        cin>>z;
    }
    void display()
    {
        cout<<"Unary Minus First number is : "<<x<<endl;
        cout<<"Unary Minus Second number is : "<<y<<endl;
        cout<<"Unary Minus Third number is : "<<z<<endl;
    }
    void operator-()//Overload the operator unary minus (-)
    {
        x=-x;
        y=-y;
        z=-z;
    }
};
int main()
{
    Minus m;
    m.input();
    -m;
    m.display();
    return 0;
}

#include<iostream>
using namespace std;
class Matrix
{
private:
    int a[3][3];
public:
    void input();
    void display();
    void operator-();
};
void Matrix::input()
{
    int i,j;
    cout<<"Enter the value Matrix (3 x 3)\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0;  j < 3; j++)
        {
            cin>>a[i][j];
        }
    }
}
void Matrix::display()
{
    int i,j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
}
void Matrix::operator-()
{
    int i,j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            a[i][j]=-a[i][j];
        }
    }
}
int main()
{
    Matrix m;
    m.input();
    cout<<"Matrix of (3 x 3)\n\n";
    m.display();
    -m;
    cout<<"\n(3 x 3)Matrix After negate the value \n\n";
    m.display();
    return 0;
}

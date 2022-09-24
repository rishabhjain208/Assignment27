#include<iostream>
using namespace std;
class Matrix
{
private:
    int a[3][3];
public:
    void input();
    void display();
    Matrix operator+(Matrix );
};
Matrix Matrix::operator+(Matrix m)
{
        int i,j;
        Matrix temp;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            temp.a[i][j]=a[i][j]+m.a[i][j];
        }
    }
        return temp;
}
void Matrix :: input()
{
    
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
    }
    
}
void Matrix :: display()
{
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<"  "<<a[i][j];
        }
        cout<<endl;
    }

}
int main()
{
    Matrix m1,m2,m3;
    cout<<"Enter the number in First (3 x 3) Matrix  \n";
    m1.input();
    cout<<"Enter the number in second (3 x 3) Matrix  \n";
    m2.input();
    cout<<"First (3 x 3) Matrix  \n\n";
    m1.display();
    cout<<"Second (3 x 3) Matrix  \n\n";
    m2.display();
    m3=m1+m2;
    cout<<"Addition of above Two Matrix (3 x 3) \n\n";
    m3.display();
    cout<<endl;
    return 0;
}
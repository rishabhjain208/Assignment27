#include<iostream>
using namespace std;
class fraction
{
private:
    long num;
    long deno;
public:
    fraction(long int n=0,long int d=0)
    {
        num=n;
        deno=d;
    }
    friend void operator>>(istream &is , fraction &f)
    {
        cout<<"Numerator :  ";
        cin>>f.num;
        cout<<"Denominator : ";
        cin>>f.deno;
    }
    friend void operator<<(ostream &os,fraction &f)
    {
        os<<"f1++ : "<<f.num<<"/"<<f.deno<<endl;
        os<<"++f1 : "<<f.num<<"/"<<f.deno;
    }
    fraction operator++()
    {
        ++num;
        ++deno;
        return (*this);
    }
    fraction operator++(int s)
    {
        fraction tmp =*this;
        num++;
        deno++;
        return tmp;
    }
};
int main()
{
    fraction f1,f2;
    cout<<"\n f1 : ";
    cout<<f1;
    cout<<"\n f2 : ";
    cin>>f2;
    cout<<"\nEnter the 1st Fraction Value \n\n"<<endl;
    cin>>f1;
    cout<<"\n f1++ : ";
    f1++;
    cout<<f1;
    cout<<"\n ++f1 : ";
    ++f1;
    cout<<f1;
    cout<<"\nEnter the 2nd Fraction Value \n\n"<<endl;
    cin>>f2;
    f2=++f1;
    cout<<"\n f2 =++f1";
    cout<<"\n f1 : ";
    cout<<f1;
    cout<<"\n f2 : ";
    cout<<f2;
    f2=f1++;
    cout<<"\n\n f2 = f1++";
    cout<<"\n f1 : ";
    cout<<f1;
    cout<<"\n f2 : ";
    cout<<f2;
    return 0;

}

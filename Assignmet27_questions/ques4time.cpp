#include<iostream>
using namespace std;
class time
{
private:
    int h,m,s;
public:
    time()
    {
        h=m=s=0;
    }
    friend int operator>>(istream &is , time &t)
    {
        cout<<"Enter the hours : ";
        is>>t.h;
        cout<<"Enter the Minutes :";
        is>>t.m;
        cout<<"Enter the Second : ";
        is>>t.s;
        t.m=t.m+t.s/60;
        t.s=t.s%60;
        t.h=t.h+t.m/60;
        t.m=t.m%60;
        if(t.h<=25)
            return 1;
        else
            return 0;
    }
     friend void operator<<(ostream &os, time &t)
    {
        os<<"\nHours : "<<t.h<<endl;
        os<<"\nMinutes : "<<t.m<<endl;
        os<<"\nSecond : "<<t.s<<endl;
    }
    int operator==(time t)
    {
       int time1 = h*3600+m*60+s;
       int time2 = h*3600+m*60+s;
       if(time1==time2)
           return 1;
       else
        return 0;
    }
};
int main()
{
    time t1,t2;
    cout<<"\nEnter the time First \n";
    cout<<"\n -------------------- \n";
    if(cin>>t1)
    {
        cout<<"\nInvalid time\n";
    }
    cout<<"First Time \n";
    cout<<t1;
    cout<<"\nEnter the time Second \n";
    cout<<"\n -------------------- \n";
    if(cin>>t2)
    {
        cout<<"\nInvalid time\n";
    }
    cout<<"Second Time \n";
    cout<<t2;
    if(t1==t2)
        cout<<"Time are equal";
    else
        cout<<"Time are not equal";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Line
{
    int val;
    double x[100];
    double y[100];
    public:
    Line(int num)
    {
        val=num;
        double xcor[num],ycor[num];
        for(int i=0;i<num;i++)
        {
            cin>>xcor[i]>>ycor[i];
        }
        for(int i=0;i<num;i++)
        {
            x[i]=xcor[i];
            y[i]=ycor[i];
        }
    }
    double calculate_length()
    {
        double x2_x1,y2_y1,length=0;
        for(int i=1;i<val;i++)
        {
            x2_x1=x[i]-x[i-1];
            y2_y1=y[i]-y[i-1];
            length+=sqrt((x2_x1*x2_x1)+(y2_y1*y2_y1));
        }
        return length;
    }
    ~Line()
    {
        cout<<"\nDest";
    }
};
int main()
{
    int n,n1;
    cout<<"Number of point in Line 1: ";
    cin>>n;
    Line l1(n);
    double x1=l1.calculate_length();
    cout<<"Number of point in Line 2: ";
    cin>>n1;
    Line l2(n1);
    double x2=l2.calculate_length();
    cout<<"Length of Line 1: "<<x1<<endl;
    cout<<"Length of Line 2: "<<x2<<endl;
    if(x1>x2)
    {
        cout<<"Line 1>Line 2";
    }
    else if(x2>x1)
    {
        cout<<"Line 2>Line 1";
    }
    else
    {
        cout<<"Line 1=Line 2";
    }
}
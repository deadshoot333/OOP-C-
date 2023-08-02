/*A straight line consists of two endpoints. However, it may consist of a number of
line segments. In this problem, you’ll have to work with a line containing several
line segments.
For example, take a look at the whole line AE(the right image below). It consists of
four line segments (AB, BC, CD and DE).
You’ll need to design a class that will hold a line consisting of line segments. There
can be n number of line segments. The Constructor will receive the value of n.
Then you’ll write a friend function of this class that will calculate the total length
of this line. The total length of AE is AB+BC+CD+DE.
As the number of points are arbitrary, you’ll need to use dynamic memory to hold
the coordinates of the point in line segments (e.g. the coordinates of point A, B, C,
D and E in the figure below). The following can be the skeleton of the class.
5
*/
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

#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    public:
    double width;
    double height;
    Rectangle(double a, double b)
    {
        width=a;
        height=b;
    }
    Rectangle(const Rectangle &obj)
    {
        width=obj.width;
        height=obj.height;
    }
    double getArea()
    {
        return width*height;
    }
    double Perimetre()
    {
        return (2.0*width)+(2.0*height);
    }
};
int main()
{
    Rectangle r(5,10);
    Rectangle rr=r;
    rr.width=7;
    cout<<"Original Rectangle Area= "<<r.width<<"*"<<r.height<<" = "<<r.getArea()<<endl;
    cout<<"Copied Rectangle Area= "<<rr.width<<"*"<<rr.height<<" = "<<rr.getArea()<<endl;
    cout<<"Original Rectangle Perimetre= "<<r.Perimetre()<<endl;
    cout<<"Copied Rectangle Perimetre= "<<rr.Perimetre()<<endl;
}
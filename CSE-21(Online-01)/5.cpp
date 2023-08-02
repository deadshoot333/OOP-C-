/*A complex variable has a real portion and an imaginary portion.
a. Write down a class that represents a complex variable (all the members will
be private)
b. Write a public setter method to set the values.
c. Write a non-member function add(...) that will take two complex Variable
objects and print their summation
d. Write a non-member function sub(...) that will take two complex Variable
objects and print their subtraction*/
#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int real;
    int imaginary;
    public:
    void set_real(int r)
    {
        real=r;
    }
    void set_imaginary(int i)
    {
        imaginary=i;
    }
    int get_real()
    {
        return real;
    }
    int get_imaginary()
    {
        return imaginary;
    }
};
void add(Complex c1,Complex c2)
{
    cout<<c1.get_real()+c2.get_real()<<"+"<<c1.get_imaginary()+c2.get_imaginary()<<"i"<<endl;
}
void sub(Complex c1,Complex c2)
{
    cout<<c1.get_real()-c2.get_real()<<"+"<<c1.get_imaginary()-c2.get_imaginary()<<"i"<<endl;
}
int main()
{
    Complex c1,c2;
    c1.set_real(1);
    c1.set_imaginary(2);
    c2.set_real(3);
    c2.set_imaginary(4);
    add(c1,c2);
    sub(c1,c2);
}

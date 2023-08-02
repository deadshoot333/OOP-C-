/*A Science Student of SSC has a roll number, marks in primary Subjects, and marks
in Science subjects.
A Commerce Student has a roll number, marks in primary subjects, and marks in
Commerce Subjects.
a. Write down two classes with the mentioned properties. (all private)
b. Write necessary public setter functions
c. Write a non-member compare(...) function that will take a science student
object and a commerce student object, and return the roll number of the
student having higher average overall marks.*/
#include<bits/stdc++.h>
using namespace std;
class Science
{
    int roll;
    int primary;
    int science;
    public:
    void set_roll(int r)
    {
        roll=r;
    }
    void set_primary(int p)
    {
        primary=p;
    }
    void set_science(int s)
    {
        science=s;
    }
    int get_roll()
    {
        return roll;
    }
    int get_primary()
    {
        return primary;
    }
    int get_science()
    {
        return science;
    }
};
int main()
{
    Science s;
    s.set_roll(1);
    s.set_primary(80);
    s.set_science(90);
    cout<<s.get_roll()<<endl;
    cout<<s.get_primary()<<endl;
    cout<<s.get_science()<<endl;
}
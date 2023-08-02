/*
An undergraduate course has 70 classes (14wk x 5d). A student can be present, or
absent in any of the days. Devise a way to keep track of the attendance of a
student.
- The student can be marked present or absent on day n
- The total number of present/absent has to be calculated
- Check if the student is dis-collegiate (<75%)
- Check if the student is non-collegiate (<90% & > 75%)*/
#include<bits/stdc++.h>
using namespace std;
class Student
{
    int present;
    int absent;
    public:
    Student()
    {
        present=0;
        absent=0;
    }
    void mark_present()
    {
        present++;
    }
    void mark_absent()
    {
        absent++;
    }
    void print()
    {
        cout<<"Present: "<<present<<endl;
        cout<<"Absent: "<<absent<<endl;
    }
    bool is_discollegiate()
    {
        if(present<0.75*70)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool is_noncollegiate()
    {
        if(present>0.75*70 && present<0.9*70)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Student s;
    int n;
    cout<<"Enter 1 for present and 0 for absent: ";
    for(int i=0;i<5;i++)
    {
        cin>>n;
        if(n==1)
        {
            s.mark_present();
        }
        else
        {
            s.mark_absent();
        }
    }
    s.print();
    if(s.is_discollegiate())
    {
        cout<<"Discollegiate"<<endl;
    }
    else if(s.is_noncollegiate())
    {
        cout<<"Non-collegiate"<<endl;
    }
    else
    {
        cout<<"Collegiate"<<endl;
    }
}
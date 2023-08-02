#include<iostream>
using namespace std;
class Student
{
    public:
        int id;
        int code;
        int classes;
        float ct1;
        float ct2;
        float ct3;
        float mid;
        int termA;
        int termB;
    void input()
    {
        cout<<"Enter Roll: ";
        cin>>id;
        cout<<"Enter Course code: ";
        cin>>code;
        cout<<"Enter number of classes present in (out of 42): ";
        cin>>classes;
        cout<<"Enter CT 1 marks(out of 20, will be converted to 30): ";
        cin>>ct1;
        cout<<"Enter CT 2 marks(out of 20, will be converted to 30): ";
        cin>>ct2;
        cout<<"Enter CT 3 marks(out of 20, will be converted to 30): ";
        cin>>ct3;
        cout<<"Enter Mid marks (out of 30): ";
        cin>>mid;
        cout<<"Enter Final(Sec A) Marks (out of 90): ";
        cin>>termA;
        cout<<"Enter Final(Sec B) Marks (out of 90): ";
        cin>>termB;
    }
    float attnd()
    {
        float y=(float)classes/42.0;
        return y*15;
    }
    float perfrmnc()
    {
        float perf=((mid/30.0)*15.0)-(42.0-(float)classes);
        if(perf<0) return 0;
        return perf;
    }
    float BestCt()
    {
        int min=ct1<ct2?(ct1<ct3?ct1:ct3):(ct2<ct3?ct2:ct3);
        float ct=1.5*(ct1+ct2+ct3-min);
        return ct; 
    }
    float total_Marks()
    {
        return termA+termB+attnd()+perfrmnc()+BestCt()+mid;
    } 
    void grade()
    {
        int y=total_Marks();
        if(y>=240 && y<=300)
        {
            cout<<"\n\n"<<id<<" Attained the grade: A in "<<code<<" with total marks (out of 300): "<<total_Marks()<<"\n\n";
        }
        else if(y>=200 && y<240)
        {
            cout<<"\n\n"<<id<<" Attained the grade: B in "<<code<<" with total marks (out of 300): "<<total_Marks()<<"\n\n";
        }
        else if(y>=160 && y<200)
        {
            cout<<"\n\n"<<id<<" Attained the grade: C in "<<code<<" with total marks (out of 300): "<<total_Marks()<<"\n\n";
        }
        else if(y>=120 && y<160)
        {
            cout<<"\n\n"<<id<<" Attained the grade: D in "<<code<<" with total marks (out of 300): "<<total_Marks()<<"\n\n";

        }
        else if(y<120)
        {
            cout<<"\n\n"<<id<<" Attained the grade: F in "<<code<<" with total marks (out of 300): "<<total_Marks()<<"\n\n";
        }
        else
        {
            cout<<"\n\n"<<id<<" Attained the grade: E in "<<code<<" with total marks (out of 300): "<<total_Marks()<<"\n\n";
        }
    }  

};
int main()
{
    Student s;
    s.input();
    cout<<"\n\n\nAfter calculation\n\n";
    cout<<"Attendance Marks: "<<s.attnd()<<'\n';
    cout<<"Performance Marks: "<<s.perfrmnc()<<'\n';
    cout<<"Best 2 CT Mark (out of 60): "<<s.BestCt()<<'\n';
    cout<<"Total (out of 300): "<<s.total_Marks()<<'\n';
    s.grade();
}
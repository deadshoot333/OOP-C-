/*Solve the problem using Object Oriented Paradigm.
A library has some books on Data Structure and some books on Algorithms.
- Books can be issued (taken from library)
- Books can be returned (to the library)
- If book-count falls below 2, a warning is shown
- If book-count is zero, it cannot be issued from the library*/
#include<bits/stdc++.h>
using namespace std;
class Book
{
    int book_count;
    public:
    Book()
    {
        book_count=0;
    }
    void issue()
    {
        if(book_count==0)
        {
            cout<<"Book cannot be issued"<<endl;
        }
        else
        {
            book_count--;
        }
    }
    void return_book()
    {
        book_count++;
    }
    void warning()
    {
        if(book_count<2)
        {
            cout<<"Warning"<<endl;
        }
    }
    void set_book_count(int b)
    {
        book_count=b;
    }
    int get_book_count()
    {
        return book_count;
    }
};
int main()
{
    Book b1,b2;
    b1.set_book_count(3);
    b2.set_book_count(1);
    b1.issue();
    b2.issue();
    b1.issue();
    b1.warning();
    b2.warning();
    b1.return_book();
    b1.issue();
    b1.warning();
    b2.warning();
    return 0;
}

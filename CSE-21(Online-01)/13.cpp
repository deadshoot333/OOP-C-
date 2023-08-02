/*In our country it is not possible to transfer money between two different banks.
You need to design a system by which transfers can be done between two different
banks(Such as DBBL and Trust Bank). For Simplicity, ignore the account number and
just think about balance. Transfer can happen in both directions, i.e., from DBBL to
Trust or from Trust to DBBL. This should be specified by user input.
a. Write down two classes that represents 2 different bank accounts such as
DBBL and Trust Bank (all the attributes will be private)
b. Each class will have 1 attribute -Balance
c. Write functions in each class to set and get the values.
d. In the main function you need to take the amount of money a user wants to
transfer.
e. Write one non-member function transferMoney(....) that will update the
Balance of each bank after each transfer.
f. Finally, show the current balance of each bank.
*/
#include<bits/stdc++.h>
using namespace std;
class DBBL
{
    int balance;
    public:
    void set_balance(int b)
    {
        balance=b;
    }
    int get_balance()
    {
        return balance;
    }
};
class Trust_Bank
{
    int balance;
    public:
    void set_balance(int b)
    {
        balance=b;
    }
    int get_balance()
    {
        return balance;
    }
};
void transferMoney(DBBL &d,Trust_Bank &t,int amount)
{
    d.set_balance(d.get_balance()+amount);
    t.set_balance(t.get_balance()-amount);
}
int main()
{
    DBBL d;
    Trust_Bank t;
    int amount;
    cout<<"Enter the amount of money you want to transfer: ";
    cin>>amount;
    d.set_balance(1000);
    t.set_balance(2000);
    transferMoney(d,t,amount);
    cout<<"DBBL: "<<d.get_balance()<<endl;
    cout<<"Trust Bank: "<<t.get_balance()<<endl;
}


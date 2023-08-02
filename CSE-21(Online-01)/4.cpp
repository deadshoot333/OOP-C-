/*In this problem, you’ll need to design a Stack class that will hold the integer values
dynamically. Use the following skeleton of Stack class.
class Stack
{
int *p; int len;
public:
Stack(int n);//n = size of the stack
~Stack(){delete [ ]p;}
initStack(int *ara)//init the stack with the values of ara
printStack()//print the values of stack
...//Write more methods if necessary
};*/
#include<bits/stdc++.h>
using namespace std;
class Stack
{
  int *p; int len;
  public:
  Stack(int n)
  {
    len=n;
    p=new int[n];
  }
  ~Stack()
  {
    delete []p;
  }
  void initStack(int *ara)
  {
    for(int i=0;i<len;i++)
    {
      p[i]=ara[i];
    }
  }
  void printStack()
  {
    for(int i=0;i<len;i++)
    {
      cout<<p[i]<<" ";
    }
    cout<<endl;
  }
};
int main()
{
  int n;
  cin>>n;
  int ara[n];
  for(int i=0;i<n;i++)
  {
    cin>>ara[i];
  }
  Stack s(n);
  s.initStack(ara);
  s.printStack();
  return 0;
}
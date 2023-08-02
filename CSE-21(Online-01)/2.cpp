#include<bits/stdc++.h>
using namespace std;
class String
{
  int len;
  char *ptr;
  public:
  String(int len,char *ptr)
  {
    this->len=len;
    this->ptr=new char[len];
    for(int i=0;i<len;i++)
    {
      this->ptr[i]=ptr[i];
    }
  }
  String(const String &obj)
  {
    this->len=obj.len;
    ptr=new char[obj.len];
    for(int i=0;i<obj.len;i++)
    {
      this->ptr[i]=obj.ptr[i];
    }
  }
  char get(int ind)
  {
    if(ind<0||ind>len)
    {
      return 0;
    }
    else
    {
      return ptr[ind];
    }
  }
  int put(int ind,char c)
  {
    if(ind<0||ind>len)
    {
      return -1;
    }
    else
    {
      ptr[ind]=c;
    }
  }
  int getlength()
  {
    return len;
  }
  void print()
  {
    for(int i=0;i<len;i++)
    {
      cout<<ptr[i];
    }
  }
  friend void compare(String s1,String s2);
  ~String()
  {
    delete [] ptr;
  }
};
void compare(String s1,String s2)
{
  int sum=0;
  for(int i=0;i<s1.len;i++)
  {
    sum+=s1.ptr[i];
  }
  cout<<sum;
}
int main()
{
  int n,n1;
  cin>>n>>n1;
  char ptr[n],ptr1[n1];
  for(int i=0;i<n;i++)
  {
    cin>>ptr[i];
  }
  for(int i=0;i<n1;i++)
  {
    cin>>ptr1[i];
  }
  String s1(n,ptr);
  String s2(n1,ptr1);
  compare(s1,s2);

}
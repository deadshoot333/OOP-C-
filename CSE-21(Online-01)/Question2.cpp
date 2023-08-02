#include<iostream>
#include<string>
using namespace std;
class operation
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    float add(int a, float b)
    {
        return a+b;
    }
    float add(float a, int b)
    {
        return a+b;
    }
    float add(float a, float b)
    {
        return a+b;
    }
    void add(string a, string b)
    {
        cout<<a<<b;
    }
};
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        operation A;
        string c1,c2;
        cin>>c1>>c2;
        if(c1=="int" && c2=="int")
        {
            int a,b;
            cin>>a>>b;
            cout<<"Test Case "<<i<<" :"<<(int)A.add(a,b)<<endl;
        }
         if(c1=="int" && c2=="float")
        {
            int a;
            float b;
            cin>>a>>b;
            cout<<"Test Case "<<i<<" :"<<(int)A.add(a,b)<<endl;
        }
         if(c1=="float" && c2=="float")
        {
            float a;
            float b;
            cin>>a>>b;
            cout<<"Test Case "<<i<<" :"<<(int)A.add(a,b)<<endl;
        }
         if(c1=="float" && c2=="int")
        {
            float a;
            int b;
            cin>>a>>b;
            cout<<"Test Case "<<i<<" :"<<(int)A.add(a,b)<<endl;
        }
        if(c1=="string" && c2=="string") 
        {
            string a,b;
            cin>>a>>b;
            cout<<"Test Case "<<i;
            cout<<" :";
            A.add(a,b);
            cout<<endl;
        }       
    }
}
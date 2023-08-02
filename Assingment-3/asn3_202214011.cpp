#include<bits/stdc++.h>
using namespace std;
namespace Financial
{
    namespace Mortage
    {
        float monthlyPayment(float r,float p,int n)
        {
            r=r/12.0;
            float c=pow(1.0+r,n)-1.0;
            return (p*r)/c;
        }
        float totalPayments(float r,float p,int n)
        {
                return monthlyPayment(r,p,n)*n;
        }
    }
    namespace Retirement
    {
        float monthlySavings(float r,float p,float n)
        {
            r=r/12.0;
            float c=pow(1.0+r,n)-1.0;
            return p/((pow (1.0 + r, n) - 1.0) / r) * c;
        }
        float totalSavings(float r,float p,int n)
        {
            return monthlySavings(r,p,n)*n*12.0;
        }
    }
}
int main()
{
    float principal_amount,interest_rate,number_of_periods;
    cout<<"Enter Principal Amount: ";
    cin>>principal_amount;
    cout<<"Enter Interest Rate: ";
    cin>>interest_rate;
    cout<<"Enter Number of Periods: ";
    cin>>number_of_periods;
    cout<<"Total Mortage of Payment: "<<Financial::Mortage::totalPayments(interest_rate,principal_amount,number_of_periods)<<endl;
    cout<<"Total Saving of Retirement: "<<Financial::Retirement::totalSavings(interest_rate,principal_amount,number_of_periods)<<endl;
}
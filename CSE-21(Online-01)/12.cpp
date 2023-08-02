/*Irteza likes to travel many places. Sometimes for efficient travelling he needs to
travel in minimum time or minimum cost. Naturally, he travels by BUS or TRAIN. So,
now you have to help him to find out which vehicle satisfies his requirement for
efficient travelling.
a. Write down two classes that represents a BUS and a TRAIN successively (all
the attributes will be private)
b. Each class will have two attributes
4
i. Velocity
ii. Cost per Kilometer
c. Write a function in each class to set the values.
d. Write one non-member function time(....) that will calculate the time
needed for each vehicle and compare them for finding the efficient vehicle.
e. Write a non-member function cost(...) that will calculate the cost for each
vehicle and compare them for finding the efficient vehicle.*/
#include<bits/stdc++.h>
using namespace std;
class Bus
{
    int velocity;
    int cost;
    public:
    void set_velocity(int v)
    {
        velocity=v;
    }
    void set_cost(int c)
    {
        cost=c;
    }
    int get_velocity()
    {
        return velocity;
    }
    int get_cost()
    {
        return cost;
    }
};
class Train
{
    int velocity;
    int cost;
    public:
    void set_velocity(int v)
    {
        velocity=v;
    }
    void set_cost(int c)
    {
        cost=c;
    }
    int get_velocity()
    {
        return velocity;
    }
    int get_cost()
    {
        return cost;
    }
};
void time(Bus &b,Train &t)
{
    int b_time=180/b.get_velocity();
    int t_time=180/t.get_velocity();
    if(b_time<t_time)
    {
        cout<<"Bus"<<endl;
    }
    else
    {
        cout<<"Train"<<endl;
    }
}
void cost(Bus &b,Train &t)
{
    int b_cost=b.get_cost()*180;
    int t_cost=t.get_cost()*180;
    if(b_cost<t_cost)
    {
        cout<<"Bus"<<endl;
    }
    else
    {
        cout<<"Train"<<endl;
    }
}
int main()
{
    Bus b;
    Train t;
    b.set_velocity(60);
    b.set_cost(10);
    t.set_velocity(80);
    t.set_cost(8);
    time(b,t);
    cost(b,t);
}
/*You are tasked with designing a program in C++ to model a car rental system. The system should handle three types of cars: economy, standard, and luxury cars. Each car has properties such as make, model, year, and a rental price per day, which differs for each type of car. Your goal is to implement this car rental system using classes and inheritance.
To classify between three car types, you can use a set of conditions to differentiate them. Here's an example of how you can approach this classification:
Start by defining the criteria that determine each car type. In this case, we'll consider factors like price range, features, and performance.
Define the conditions for each car type based on the criteria. Here's an example:
Economy Car:
Price range: Below a certain threshold (e.g., $20,000)
Features: Basic features, limited advanced technology.
Performance: Fuel-efficient, lower horsepower, smaller engine size.
Standard Car:
Price range: Mid-range (e.g.. $20,000 - $50,000)
Features: Moderately equipped, some advanced technology.
Performance: Balanced between fuel efficiency and power, average engine size.
Luxury Car:
Price range: High-end (e.g., above $50,000)
Features: High-end features, advanced technology, luxury materials.
Performance: Powerful engine, high horsepower, premium driving experience.*/
#include<bits/stdc++.h>
using namespace std;
class Car
{
    string make;
    string model;
    int year;
    double rentalPrice;
    public:
    Car(string make,string model,int year,double rentalPrice)
    {
        this->make=make;
        this->model=model;
        this->year=year;
        this->rentalPrice=rentalPrice;
    }
   virtual void display()
    {
        cout<<"Make= "<<make<<endl;
        cout<<"Model= "<<model<<endl;
        cout<<"Year= "<<year<<endl;
        cout<<"Rental Price=$ "<<rentalPrice<<endl;
    }
};
class Economy : public Car
{
    string features="Basic Features,Limited Advance Technology.";
    string Performance="Fuel-efficient, lower horsepower, smaller engine size.";
    public:
    Economy(string make,string model,int year,double rentalPrice): Car(make,model,year,rentalPrice)
    {

    }
    void display()
    {
        Car::display();
        cout<<"Features= "<<features<<endl;
        cout<<"Performance= "<<Performance<<endl;
    }
};
class Standard: public Car
{
    string Features="Moderately equipped, some advanced technology.";
    string Performance="Balanced between fuel efficiency and power, average engine size.";
    public:
    Standard(string make,string model,int year,double rentalPrice): Car(make,model,year,rentalPrice)
    {

    }
    void display()
    {
        Car::display();
        cout<<"Features= "<<Features<<endl;
        cout<<"Performance= "<<Performance<<endl;
    }
};
class Luxury: public Car
{
    string Features="High-end features,advanced technology,luxury materials.";
    string Performance="Powerfull engine,high horsepower,premium driving exprerience.";
    public:
    Luxury(string make,string model,int year,double rentalPrice): Car(make,model,year,rentalPrice)
    {

    }
    void display()
    {
        Car::display();
        cout<<"Features= "<<Features<<endl;
        cout<<"Performance= "<<Performance<<endl;
    }
};
int main()
{
    Car *c1=new Economy("Honda","Civic",2019,100);
    Car *c2=new Standard("Toyota","Corolla",2018,200);
    Car *c3=new Luxury("Audi","A8",2020,300);
    c1->display();
    cout<<endl;
    c2->display();
    cout<<endl;
    c3->display();
    cout<<endl;
    return 0;
}
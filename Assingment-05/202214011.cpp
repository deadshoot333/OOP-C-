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
        cout<<"Make: "<<make<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
        cout<<"Rental Price: $"<<rentalPrice<<endl;
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
        cout<<"Features: "<<features<<endl;
        cout<<"Performance: "<<Performance<<endl;
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
        cout<<"Features: "<<Features<<endl;
        cout<<"Performance: "<<Performance<<endl;
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
        cout<<"Features: "<<Features<<endl;
        cout<<"Performance: "<<Performance<<endl;
    }
};
int main()
{
    string make;
    string model;
    int year;
    double rentalPrice;
    cout<<"Enter car: ";
    getline(cin,make); 
    cout<<"Enter model: ";
    getline(cin,model);
    cout<<"Enter year: ";
    cin>>year;
    cout<<"Enter Rental Price: ";
    cin>>rentalPrice;
    if(rentalPrice<=20000)
    {
        Car *eco=new Economy(make,model,year,rentalPrice);
        eco->display();
    } 
    else if(rentalPrice>20000 && rentalPrice<=50000)
    {
        Car *std=new Standard(make,model,year,rentalPrice);
        std->display();
    }
    else if(rentalPrice>50000)
    {
        Car *lux=new Luxury(make,model,year,rentalPrice);
        lux->display();
    }
}
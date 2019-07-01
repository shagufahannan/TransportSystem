#include<iostream>
#include<string>
using namespace std;


class Transport
{

public:

    virtual void printdetails()=0;
    virtual void printspeed()=0;
    string enginetype;
    string fueltype;

};


class Bus:virtual public Transport
{
   int numberofseats;
   double topspeed;
   public:
        void getdeets()
        {
            cout<<"enter number of seats"<<endl;
            cin>>numberofseats;
            cout<<"enter top speed in miles"<<endl;
            cin>>topspeed;
            cout<<"enter engine type"<<endl;
            cin>>Transport::enginetype;
            cout<<"enter fuel type"<<endl;
            cin>>Transport::fueltype;
        }

        void printdetails()
        {
            cout<<"number of decks : "<<numberofseats<<endl;

            cout<<"engine type : "<<Transport::enginetype<<endl;

            cout<<"fuel type : "<<Transport::fueltype<<endl;

        }

        void printspeed()
        {
            topspeed=(topspeed/0.6211);
            cout<<"top speed : "<<topspeed<<"km per hour"<<endl;

        }



};

class ship:virtual public Transport
{
   int numberofseats;
   double topspeed;

   public:
        void getdeets()
        {
            cout<<"enter number of seats"<<endl;
            cin>>numberofseats;
            cout<<"enter top speed in nautical miles"<<endl;
            cin>>topspeed;
            cout<<"enter engine type"<<endl;
            cin>>Transport::enginetype;
            cout<<"enter fuel type"<<endl;
            cin>>Transport::fueltype;
        }
        void printdetails()
        {
            cout<<"number of seats : "<<numberofseats<<endl;

            cout<<"engine type : "<<Transport::enginetype<<endl;

            cout<<"fuel type : "<<Transport::fueltype<<endl;

        }

        void printspeed()
        {
            topspeed=(topspeed/0.54);

            cout<<"top speed : "<<topspeed<<"km per hour"<<endl;
        }
} ;


int main()
{
    Bus b;


    b.getdeets();
    b.printdetails();
    b.printspeed();

    ship s;

    s.getdeets();
    s.printdetails();
    s.printspeed();
}

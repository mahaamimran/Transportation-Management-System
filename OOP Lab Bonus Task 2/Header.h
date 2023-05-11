#include <iostream>
using namespace std;
class Time{
protected:
    int hour;
    int minute;
public:
    Time(int h=0,int m=0);
    void setHour(int h);
    int getHour();
    void setMinute(int m);
    int getMinute();
    void display();
};
// defined
class Routes:public Time{
    string source;
    string destination;
    double distance;
    double fare;
    Time departure;
    Time arrival;
public:
    Routes(string s=" ",string d=" ",double dis=0.0,double f=0.0,Time dep=Time(),Time arr=Time());
    void setSource(string s);
    string getSource();
    void setDestination(string d);
    string getDestination();
    void setDistance(double dis);
    double getDistance();
    void setFare(double f);
    double getFare();
    void setDeparture(Time dep);
    Time getDeparture();
    void setArrival(Time arr);
    Time getArrival();
    void display();
    void calculateFare(double dis);
    // overload << operator
    friend ostream& operator<<(ostream& out,Routes& r);
};
// defined
class Vehicle{
    string name;
    int capacity;
public:
    Vehicle(string n=" ",int c=0);
    void setName(string n);
    string getName();
    void setCapacity(int c);
    int getCapacity();
    void display();
    // overload << operator
    friend ostream& operator<<(ostream& out,Vehicle& v);
};
// defined
class Booking{
    bool status; // completed or not
    Routes route;
    Vehicle vehicle;
public: 
    Booking(bool s=false,Routes r=Routes(),Vehicle v=Vehicle());
    void setStatus(bool s);
    bool getStatus();
    void setRoute(Routes r);
    Routes getRoute();
    void setVehicle(Vehicle v);
    Vehicle getVehicle();
    void display();
    // overload << operator
    friend ostream& operator<<(ostream& out,Booking& b);
};
// defined
class User{
    string name;
    Booking booking;
public:
    User(string n=" ",Booking b=Booking());
    void setName(string n);
    string getName();
    void setBooking(Booking b);
    Booking getBooking();
    void display();
};
// defined

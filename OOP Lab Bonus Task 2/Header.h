#include <iostream>
using namespace std;
class Time{
    int hour;
    int minute;
    double durationinHours;
public:
    Time(int h=0,int m=0,double d=0.0);
    void setHour(int h);
    int getHour();
    void setMinute(int m);
    int getMinute();
    void setDuration(double d);
    double getDuration();
    void display();
    void calculateDuration(Time t1, Time t2);
};

class Routes{
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
    void calculateArrival(Time dep,double dis);
};
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
};
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
};

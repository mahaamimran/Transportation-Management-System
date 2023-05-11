// Ravka Transportation System
// Maham Imran 22i-2733 SE-F
// main complete
// parameterised & default constructors complete
// set & get functions complete
// aggregation used
// display complete
// calculate fare complete
// operator overloading complete
// sorting complete
// oop concepts complete

#include <iostream>
#include "BonusTask_i222733.h"
using namespace std;
Booking *b=new Booking[100];
int admin(){
    int count=0;
    int choice;
    do{
        cout << "What action would you like to perform?\n";
        cout << "1. View all routes\n";
        cout << "2. Add new routes\n";
        cout << "3. Sort routes\n";
        cout << "4. Exit\n";
        cin >> choice;

        switch (choice){
            case 1:
            // simple displaying
            if(count!=0){
                for (int i = 0; i < count; i++){
                    cout << "\nRoute " << i + 1 << endl;
                    cout<<b[i]<<endl;
               }
           }
            else cout<<"No routes available\n";
                break;
            case 2:{
            // populating object
                cout << "What time does the vehicle depart?\n";
                int h, m;
                cout << "Hour: ";
                cin >> h;
                cout << "Minute: ";
                cin >> m;
                Time t1(h, m);
                cout << "What time does the vehicle arrive?\n";
                cout << "Hour: ";
                cin >> h;
                cout << "Minute: ";
                cin >> m;
                Time t2(h, m);
                Routes r1;
                cout << "What is the source of the route?\n";
                string s;
                cin >> s;
                r1.setSource(s);
                cout << "What is the destination of the route?\n";
                string d;
                cin >> d;
                r1.setDestination(d);
                cout << "What is the distance of the route?\n";
                double dis;
                cin >> dis;
                r1.setDistance(dis);
                r1.calculateFare(dis);
                r1.setDeparture(t1);
                r1.setArrival(t2);
                cout<<"What is the name of the vehicle?\n";
                string n;
                cin>>n;
                cout<<"What is the capacity of the vehicle?\n";
                int c;
                cin>>c;
                Vehicle v1(n,c);
                b[count].setRoute(r1);
                b[count].setVehicle(v1);
                b[count].setStatus(false);
                count++;
                break;
           }
            case 3:{
            // sorting algorithms
            int choice;
            do{
                cout<<"What would you like to sort by?\n";
                cout<<"1. Source\n";
                cout<<"2. Destination\n";
                cout<<"3. Distance\n";
                cout<<"4. Fare\n";
                cout<<"5. Departure\n";
                cout<<"6. Arrival\n";
                cout<<"7. Vehicle\n";
                cout<<"8. Capacity\n";
                cout<<"9. Exit\n";
                cin>>choice;
                switch(choice){
                    case 1:{
                        for(int i=0;i<count;i++){
                            for(int j=0;j<count-1;j++){
                                if(b[j].getRoute().getSource()>b[j+1].getRoute().getSource()){
                                    Booking temp=b[j];
                                    b[j]=b[j+1];
                                    b[j+1]=temp;
                               }
                           }
                       }
                        break;
                   }
                    case 2:{
                        for(int i=0;i<count;i++){
                            for(int j=0;j<count-1;j++){
                                if(b[j].getRoute().getDestination()>b[j+1].getRoute().getDestination()){
                                    Booking temp=b[j];
                                    b[j]=b[j+1];
                                    b[j+1]=temp;
                               }
                           }
                       }
                        break;
                   }
                    case 3:{
                        for(int i=0;i<count;i++){
                            for(int j=0;j<count-1;j++){
                                if(b[j].getRoute().getDistance()>b[j+1].getRoute().getDistance()){
                                    Booking temp=b[j];
                                    b[j]=b[j+1];
                                    b[j+1]=temp;
                               }
                           }
                       }
                        break;
                   }
                    case 4:{
                        for(int i=0;i<count;i++){
                            for(int j=0;j<count-1;j++){
                                if(b[j].getRoute().getFare()>b[j+1].getRoute().getFare()){
                                    Booking temp=b[j];
                                    b[j]=b[j+1];
                                    b[j+1]=temp;
                               }
                           }
                       }
                        break;
                   }
                    case 5:{
                        for(int i=0;i<count;i++){
                            for(int j=0;j<count-1;j++){
                                if(b[j].getRoute().getDeparture().getHour()>b[j+1].getRoute().getDeparture().getHour()){
                                    Booking temp=b[j];
                                    b[j]=b[j+1];
                                    b[j+1]=temp;
                               }
                                else if(b[j].getRoute().getDeparture().getHour()==b[j+1].getRoute().getDeparture().getHour()){
                                    if(b[j].getRoute().getDeparture().getMinute()>b[j+1].getRoute().getDeparture().getMinute()){
                                        Booking temp=b[j];
                                        b[j]=b[j+1];
                                        b[j+1]=temp;
                                   }
                               }
                           }
                       }
                        break;
                   }
                    case 6:{
                        for(int i=0;i<count;i++){
                            for(int j=0;j<count-1;j++){
                                if(b[j].getRoute().getArrival().getHour()>b[j+1].getRoute().getArrival().getHour()){
                                    Booking temp=b[j];
                                    b[j]=b[j+1];
                                    b[j+1]=temp;
                               }
                                else if(b[j].getRoute().getArrival().getHour()==b[j+1].getRoute().getArrival().getHour()){
                                    if(b[j].getRoute().getArrival().getMinute()>b[j+1].getRoute().getArrival().getMinute()){
                                        Booking temp=b[j];
                                        b[j]=b[j+1];
                                        b[j+1]=temp;
                                   }
                               }
                           }
                       }
                        break;
                   }
                    case 7:{
                        for(int i=0;i<count;i++){
                            for(int j=0;j<count-1;j++){
                                if(b[j].getVehicle().getName()>b[j+1].getVehicle().getName()){
                                    Booking temp=b[j];
                                    b[j]=b[j+1];
                                    b[j+1]=temp;
                               }
                           }
                       }
                        break;
                   }
                    case 8:{
                        for(int i=0;i<count;i++){
                            for(int j=0;j<count-1;j++){
                                if(b[j].getVehicle().getCapacity()>b[j+1].getVehicle().getCapacity()){
                                    Booking temp=b[j];
                                    b[j]=b[j+1];
                                    b[j+1]=temp;
                               }
                           }
                       }
                        break;
                   }
                    case 9:
                    cout<<"Exiting sorting menu\n";
                    break;
               }
           }while(choice!=9);
            break;
           }
            case 4:
                cout<<"Thank you for using Ravka Transportation System\n";
                break;
            default:
                cout<<"Invalid choice\n";
                break;
       }
   }while(choice!=4);
    return count;
}
void user(int count){
 
    int choice;
    do{
        cout<<"What would you like to do?\n";
        cout<<"1. View booking details\n";
        cout<<"2. Reserve a seat\n";
        cout<<"3. Exit\n";
        cin>>choice;
        switch(choice){
            case 1:{
             // simple displaying
            if(count!=0){
                for (int i = 0; i < count; i++){
                    cout << "\nRoute " << i + 1 << endl;
                    cout<<b[i]<<endl;
               }
           }
            else cout<<"No routes available\n";
                break;
           }
            case 2:{
                // Call the reserve a seat function here
                cout<<"Enter your name\n";
                string name;
                cin>>name;
                cout<<"Enter the number of seats you want to reserve\n";
                int seats;
                cin>>seats;
                cout<<"Enter the route number you'd like to book\n";
                int route;
                cin>>route;
                cout<<b[route-1];
                User u(name,b[route-1]);
                // decrementing available seat capacity
                b[route-1].getVehicle().setCapacity(b[route-1].getVehicle().getCapacity()-seats);
                cout<<"\nSuccesfully booked!\n";
                
                u.display();
                cout<<b[route-1]<<endl;
                break;
           }
                break;
            case 3:
            cout<<"Thank you for using Ravka Transportation System\n";
                
                break;
       }
   }while(choice!=3);
}
int main(){
    int count=0;
    cout << "Welcome to Ravka Transportation System\n";
    int choice;

    do{
        cout << "Are you an admin or a user?\n";
        cout << "1. Admin\n";
        cout << "2. User\n";
        cout << "3. Exit\n";
        cin >> choice;

        switch (choice){
            case 1:
                count=admin();
                break;
            case 2:
                user(count);
                break;
            case 3:
                break;
            default:
                cout << "Invalid choice\n";
                break;
       }
   } while (choice != 3);

    return 0;
}

// time
Time::Time(int h,int m){
    hour=h;
    minute=m;
}
void Time::setHour(int h){
    hour=h;
}
int Time::getHour(){
    return hour;
}
void Time::setMinute(int m){
    minute=m;
}
int Time::getMinute(){
    return minute;
}
void Time::display(){
    cout<<hour<<":"<<minute<<endl;
}
// routes
Routes::Routes(string s,string d,double dis,double f,Time dep,Time arr){
    source=s;
    destination=d;
    distance=dis;
    fare=f;
    departure=dep;
    arrival=arr;
}
void Routes::setSource(string s){
    source=s;
}
string Routes::getSource(){
    return source;
}
void Routes::setDestination(string d){
    destination=d;
}
string Routes::getDestination(){
    return destination;
}
void Routes::setDistance(double dis){
    distance=dis;
}
double Routes::getDistance(){
    return distance;
}
void Routes::setFare(double f){
    fare=f;
}
double Routes::getFare(){
    return fare;
}
void Routes::setDeparture(Time dep){
    departure=dep;
}
Time Routes::getDeparture(){
    return departure;
}
void Routes::setArrival(Time arr){
    arrival=arr;
}
Time Routes::getArrival(){
    return arrival;
}
void Routes::display(){
    cout<<"Source: "<<source<<endl;
    cout<<"Destination: "<<destination<<endl;
    cout<<"Distance: "<<distance<<endl;
    cout<<"Fare: "<<fare<<endl;
    cout<<"Departure: ";
    departure.display();
    cout<<"Arrival: ";
    arrival.display();
}
void Routes::calculateFare(double dis){
    fare=dis*10;
}

// vehicle
Vehicle::Vehicle(string n,int c){
    name=n;
    capacity=c;
}
void Vehicle::setName(string n){
    name=n;
}
string Vehicle::getName(){
    return name;
}
void Vehicle::setCapacity(int c){
    capacity=c;
}
int Vehicle::getCapacity(){
    return capacity;
}
void Vehicle::display(){
    cout<<"Vehicle Name: "<<name<<endl;
    cout<<"Vehicle Capacity: "<<capacity<<endl;
}
// booking
Booking::Booking(bool s,Routes r,Vehicle v){
    status=s;
    route=r;
    vehicle=v;
}
void Booking::setStatus(bool s){
    status=s;
}
bool Booking::getStatus(){
    return status;
}
void Booking::setRoute(Routes r){
    route=r;
}
Routes Booking::getRoute(){
    return route;
}
void Booking::setVehicle(Vehicle v){
    vehicle=v;
}
Vehicle Booking::getVehicle(){
    return vehicle;
}
void Booking::display(){
    cout<<"Status: ";
    cout<<(status?"Completed.":"Not Completed")<<endl;
    route.display();
    vehicle.display();
}
// user
User::User(string n,Booking b){
    name=n;
    booking=b;
}
void User::setName(string n){
    name=n;
}
string User::getName(){
    return name;
}
void User::setBooking(Booking b){
    booking=b;
}
Booking User::getBooking(){
    return booking;
}
void User::display(){
    cout<<"Name: "<<name<<endl;
    booking.display();
}
// operator overloading
ostream& operator<<(ostream& out,Booking& b){
    out<<"Status: "<<(b.status?"Completed.":"Not Completed")<<endl;
    out<<b.route;
    out<<b.vehicle;
    return out;
}
ostream& operator<<(ostream& out,Vehicle& v){
    out<<"Vehicle Name: "<<v.name<<endl;
    out<<"Vehicle Capacity: "<<v.capacity<<endl;
    return out;
}
ostream& operator<<(ostream& out,Routes& r){
    out<<"Source: "<<r.source<<endl;
    out<<"Destination: "<<r.destination<<endl;
    out<<"Distance: "<<r.distance<<endl;
    out<<"Fare: "<<r.fare<<endl;
    out<<"Departure: "<<r.departure.getHour()<<":"<<r.departure.getMinute()<<endl;
    out<<"Arrival: "<<r.arrival.getHour()<<":"<<r.arrival.getMinute()<<endl;
    return out;
}

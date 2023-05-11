// Ravka Transportation System
// Maham Imran 22i-2733 SE-F
#include <iostream>
#include "Header.h"
using namespace std;
void admin(){
    int choice;
    do{
    cout<<"What action would you like to perform?\n";
    cout<<"1. View all routes\n";
    cout<<"2. Add new routes\n";
    cout<<"3. Sort routes\n";
    cin>>choice;
        switch(choice){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                cout<<"Invalid choice\n";
                break;
        }
    }while(choice!=3);
}
void user(){

}
int main(){
    cout<<"Welcome to Ravka Transportation System\n";
    int choice;
    do{
        cout<<"Are you an admin or a user?\n";
        cout<<"1. Admin\n";
        cout<<"2. User\n";
        cout<<"3. Exit\n";
        cin>>choice;
            switch(choice){
                case 1:
                    admin();
                    break;
                case 2:
                    user();
                    break;
                case 3:
                    break;
                default:
                    cout<<"Invalid choice\n";
                    break;
            }
    }while(choice!=3);
    return 0;
}

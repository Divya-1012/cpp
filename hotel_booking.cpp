#include<iostream>
#include<string>

using namespace std;
class Room{
    public:
     int roomNumber;
     string type;
     double price;
     bool isAvailable;
    
    //Constructor to initialize the room
     Room(int rNum,string rType,double rPrice){
        roomNumber=rNum;
        type=rType;
        price=rPrice;
        isAvailable=true; //Initially all room are empty
     }

     //Function to book room
     void bookRoom(){
        if(isAvailable){
            isAvailable=false;
            cout<<"Room "<<roomNumber<<" Has been Successfully booked!"<<endl;
        }
        else{
            cout<<"Sorry,Room "<<roomNumber<<"is already booked!"<<endl;
        }
     }

     //Function to cancel booking
     void cancelBooking(){
        if(!isAvailable){
            isAvailable=true;
            cout<<"Booking for Room"<<roomNumber<<" has been successfully cancelled"<<endl;
        }
        else{
            cout<<"Room"<<roomNumber<<" is not booked"<<endl;
        }
     }

     //Function to display the room
     void displayRoomInfo(){
        cout<<"Room Number -"<<roomNumber<<"  Type -"<<type<<"  Price -"<<price<<"  Availability -"<<(isAvailable?"Available":"Booked")<<endl;
     }


};

int main(){
    const int numberOfRooms=5;

    //array of pointer to room objects
    Room*hotelRoom[numberOfRooms];

    //Initialize the rooms(room number,type,price)
    hotelRoom[0]=new Room(101,"single",50.0);
    hotelRoom[1]=new Room(102,"single",50.0);
    hotelRoom[2]=new Room(201,"double",80.0);
    hotelRoom[3]=new Room(202,"double",80.0);
    hotelRoom[4]=new Room(301,"suite",150.0);

    int choice;
    do{
        cout<<"\n Hotel Room Booking System"<<endl;
        cout<<"1.Display all rooms"<<endl;
        cout<<"2.Book a room"<<endl;
        cout<<"3.Cancel Booking"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
             cout<<"\nAvailable Room\n";
             for(int i=0;i<numberOfRooms;i++){
                hotelRoom[i]->displayRoomInfo();
             }
             break;
             case 2:
             int roomNum;
             cout<<"\nEnter the room number to book";
             cin>>roomNum;
             bool found;
             found=false;
             for(int i=0;i<numberOfRooms;i++){
                if(hotelRoom[i]->roomNumber==roomNum){
                    hotelRoom[i]->bookRoom();
                    found=true;
                    break;
                }
             }
             if(!found){
                cout<<"room number"<<roomNum<<"does not exit"<<endl;
             }
             break;
             case 3:
             int roomNum1;
             cout<<"\nEnter the room number to cancel booking";
             cin>>roomNum1;
             bool found1;
             found1=false;
             for(int i=0;i<numberOfRooms;++i){
                if(hotelRoom[i]->roomNumber==roomNum1){
                    hotelRoom[i]->cancelBooking();
                    found1=true;
                    break;
                }
             }
             break;
             case 4:
              cout<<"Exiting the system.Thank You!"<<endl;
              break;
            default:
              cout<<"Invalid Choice.Please Try Again"<<endl;
        }


    }while(choice!=4);
    return 0;

}
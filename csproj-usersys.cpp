#include<iostream>
#include<vector>
#include<string>
using namespace std;
//user system

string room_type[3] = { "single","double","suite" };
int price_room[3]={50,70,100};

class user {

protected:
string name;
int age;
vector<string>user_rooms;

public:
void search_room() {
for (int i = 0;i < 3;i++) {
cout << room_type[i] << "\t Price: " << price_room[i];
}

}
void book_room(string room_choice){
    //input check in and out dates
    user_rooms.push_back(room,room_choice);
    cout<<"Dear "<<name<<" your reservation for room: "<<room_choice<<" has been booked successfully. \n";    
}
void checkout(string room_choice){
    for(int i=0;i<user_rooms.size();i++){
        if(room_choice==room_type[i]){
            break;
    }
    user_rooms.erase(i);
    cout<<"Dear "<<name<<" you have checked out from room: "<<room_choice<< " successfully. \n";
}

};
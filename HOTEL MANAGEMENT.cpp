#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class Entertainment {
protected:
    string name;
public:
    Entertainment() {}
    Entertainment(string n) : name(n) {}
    virtual void display() = 0;
};
class Movie : public Entertainment {
private:
    string genre;
    int duration; // in minutes
public:
    Movie() {}
    Movie(string n, string g, int d) : Entertainment(n), genre(g), duration(d) {}
    void display() //override 
	{
		cout<<"---------------------------------------------------"<<endl;
        cout<<"Movie: "<<name<<endl;
        cout<<"---------------------------------------------------"<<endl;
		cout<<"Genre: "<<genre<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<"Duration: "<<duration<<" minutes"<<endl;
		cout<<"---------------------------------------------------"<<endl;
    }
    void inputDetails() {
        cout<<"Enter movie name: ";
        cin>>name;
        cout<<"Enter genre: ";
        cin>>genre;
        cout<<"Enter duration (in minutes): ";
        cin>>duration;
    }
};class VideoGame : public Entertainment {
private:
    string platform;
public:
    VideoGame() {}
    VideoGame(string n, string p) : Entertainment(n), platform(p) {}
    void display() // override
	{
		cout<<"---------------------------------------------------"<<endl;
        cout<<"Video Game: "<<name<<endl;
        cout<<"---------------------------------------------------"<<endl;
		cout<<"Platform: "<<platform<<endl;
		cout<<"---------------------------------------------------"<<endl;
    }
    void inputDetails() {
        cout<<"Enter video game name: ";
        cin>>name;
        cout<<"Enter platform: ";
        cin>>platform;
    }
};

class GoKarting : public Entertainment {
private:
    int duration; // in minutes
public:
    GoKarting() {}
    GoKarting(string n, int d) : Entertainment(n), duration(d) {}
    void display() //override 
	{
        cout << "Go Karting Session: "<<name<<endl;
        cout<<"---------------------------------------------------"<<endl;
		cout<<"Duration: " << duration<<" minutes"<<endl;
		cout<<"---------------------------------------------------"<<endl;
    }
    void inputDetails() {
        cout<<"Enter go karting session name: ";
        cin>>name;
        cout<<"Enter duration (in minutes): ";
        cin>>duration;
    }
};

class PaintBall : public Entertainment {
private:
    int numPlayers;
public:
    PaintBall() {}
    PaintBall(string n, int players) : Entertainment(n), numPlayers(players) {}
    void display() //override 
	{
        cout<<"Paintball Session: "<<name<<endl;
        cout<<"---------------------------------------------------"<<endl;
		cout<<"Number of Players: "<<numPlayers<<endl;
		cout<<"---------------------------------------------------"<<endl;
    }
    void inputDetails() {
        cout<<"Enter paintball session name: ";
        cin>>name;
        cout<<"Enter number of players: ";
        cin>>numPlayers;
    }
};

class Hotel{
	int age;
	int member;
	public:
		int a;
		string name;
		string user,   user1;
		string pass, pass1;
		string mail;
		
		Hotel(int m=0, int a=0)
		{
		   member=m;
		   age=a;	
		}
		friend void Signup(Hotel&);
		
			void Login()
		{
			cout<<"     * * * * * * * * * *     "<<endl;
			cout<<"     *                 *     "<<endl;
			cout<<"     *      LOGIN      *     "<<endl;
			cout<<"     *                 *     "<<endl;
			cout<<"     * * * * * * * * * *     "<<endl;
			do{
			if(user==user1 && pass==pass1)
			{
		    cout<<"Enter your username: ";
			cin>>user;
			cout<<"Enter your Password: ";
			cin>>pass;
			
			cout<<"LOGIN SUCCESSFUL: ";
	        }
	        else
	        {
			cout<<"Incorrect username or password. Please Try again."<<endl;
			}
	          }while(user!=user1 || pass!=pass1);
		}
	
		void PRINT()
		{
			int select;
				cout<<"                    * * * * * * * * * * * * * * *                       "<<endl;
				cout<<"                    *   WELCOME TO GIKI HOTEL!  *                       "<<endl;
				cout<<"                    * * * * * * * * * * * * * * *                       "<<endl<<endl;	
				
				cout<<"     * * * * * * * * * * * * * *       * * * * * * * * * * * * * *      "<<endl;
		        cout<<"     *  1. ROOMS RESERVATION   *       *       2. MEALS          *      "<<endl;
		        cout<<"     * * * * * * * * * * * * * *       * * * * * * * * * * * * * *      "<<endl<<endl;
		        
		        cout<<"     * * * * * * * * * * * * * *       * * * * * * * * * * * * * *      "<<endl;
		        cout<<"     *     3. GYMNASIUM        *       *     4. ENTERTAINMENT    *      "<<endl;
		        cout<<"     * * * * * * * * * * * * * *       * * * * * * * * * * * * * *      "<<endl<<endl;
		        
		        cout<<"                         * * * * * * * * * * *                          "<<endl;
		        cout<<"                         *      5. EXIT      *                          "<<endl;
		        cout<<"                         * * * * * * * * * * *                          "<<endl<<endl;
		        
		       do{
		       cout<<"PLEASE SELECT: ";
			   cin>>select;
			   system("cls");
			   
			   switch(select)
		    {
		    	case 1:
		    	cout<<"                    * * * * * * * * * * * * * * * * * *                       "<<endl;
			    cout<<"                    *   WELCOME TO ROOM RESERVATION   *                       "<<endl;
			    cout<<"                    * * * * * * * * * * * * * * * * * *                       "<<endl<<endl;;
		        hotelReservation();
		        break;
		        
		        case 2:
                cout<<"                    * * * * * * * * * * * * * * *                       "<<endl;
			    cout<<"                    *     WELCOME TO MEALS      *                       "<<endl;
			    cout<<"                    * * * * * * * * * * * * * * *                       "<<endl<<endl;
		        pMeal();
		        break;
		        
		        case 3:
		        cout<<"                    * * * * * * * * * * * * * * *                       "<<endl;
			    cout<<"                    *   WELCOME TO GYMNASIUM    *                       "<<endl;
			    cout<<"                    * * * * * * * * * * * * * * *                       "<<endl<<endl;
		        Gymnasium();
		        break;
		        
		        case 4:
		    	cout<<"                    * * * * * * * * * * * * * * *                       "<<endl;
			    cout<<"                    *  WELCOME TO ENTERTAINMENT *                       "<<endl;
			    cout<<"                    * * * * * * * * * * * * * * *                       "<<endl<<endl;
		        Entertainment();
		        break;
		        
		        case 5:
		        cout<<"                    * * * * * * * * * * * * * * *                       "<<endl;
			    cout<<"                    * EXITING THE APP, THANKYOU *                       "<<endl;
			    cout<<"                    * * * * * * * * * * * * * * *                       "<<endl<<endl;
			    
		        default:
		        {
		        	cout<<"INVALID SELECTION. PLEASE TRY AGAIN."<<endl;
				}
				break;	
			     
			}
			}while(select>5);
		        
	    }

 // Define a structure for the room
struct Room {
    int roomNumber;
    bool isReserved;
    string guestName;
};

// Function to reserve a room
void reserveRoom(Room rooms[], int totalRooms) {
    int roomNumber;
    cout<<"---------------------------------------------------"<<endl;
    cout << "Enter the room number you want to reserve(1-20): ";
    cin >> roomNumber;
    cout<<"---------------------------------------------------"<<endl;

    if (roomNumber < 1 || roomNumber > totalRooms) {
        cout << "Invalid room number!" << endl;
        return;
    }

    if (rooms[roomNumber - 1].isReserved) {
        cout << "Room " << roomNumber << " is already reserved." << endl;
        cout<<"---------------------------------------------------"<<endl;
    } else {
        cout << "Enter guest name: ";
        cin >> rooms[roomNumber - 1].guestName;
        system("cls");
        cout<<"                    * * * * * * * * * * * * * * * * * *                       "<<endl;
		cout<<"                    *   WELCOME TO ROOM RESERVATION   *                       "<<endl;
	    cout<<"                    * * * * * * * * * * * * * * * * * *                       "<<endl<<endl;;
        
        cout<<"---------------------------------------------------"<<endl;
        rooms[roomNumber - 1].isReserved = true;
        cout << "Room " << roomNumber << " has been reserved for " << rooms[roomNumber - 1].guestName << endl;
        cout<<"---------------------------------------------------"<<endl;
    }
}

// Function to cancel reservation
void cancelReservation(Room rooms[], int totalRooms) {
    int roomNumber;
    cout<<"---------------------------------------------------"<<endl;
    cout << "Enter the room number you want to cancel reservation for: ";
    cin >> roomNumber;
    cout<<endl;
    cout<<"---------------------------------------------------"<<endl;

    if (roomNumber < 1 || roomNumber > totalRooms) {
        cout << "Invalid room number!" << endl;
        return;
    }

    if (rooms[roomNumber - 1].isReserved) {
        cout << "Reservation for room " << roomNumber << " has been canceled." << endl;
        cout<<"---------------------------------------------------"<<endl;
        rooms[roomNumber - 1].isReserved = false;
        rooms[roomNumber - 1].guestName = "";
    } else {
        cout << "Room " << roomNumber << " is not reserved." << endl;
        cout<<"---------------------------------------------------"<<endl;
    }
}

// Function to display all rooms
void displayRooms(Room rooms[], int totalRooms) {
    cout << "Room          Status          Guest" << endl;
    for (int i = 0; i < totalRooms; ++i) {
        cout << i + 1 << "            "<< (rooms[i].isReserved ? "Reserved" : "Available") << "       " << rooms[i].guestName << endl;
    }
}

// Function to handle the entire reservation system
void hotelReservation() {
    const int totalRooms = 20; // Total number of rooms in the hotel
    Room rooms[totalRooms]; // Array to store room information

    // Initialize rooms
    for (int i = 0; i < totalRooms; ++i) {
        rooms[i].roomNumber = i + 1;
        rooms[i].isReserved = false;
        rooms[i].guestName = "";
    }

    int choice;
    do {
        cout << "1. Reserve a room" << endl;
        cout << "2. Cancel reservation" << endl;
        cout << "3. Display all rooms" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                reserveRoom(rooms, totalRooms);
                break;
            case 2:
                cancelReservation(rooms, totalRooms);
                break;
            case 3:
                displayRooms(rooms, totalRooms);
                break;
            case 4:
                cout << "Exiting program. Thank you!" << endl;
                
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
     cout<<"---------------------------------------------------"<<endl;
    cout<<"Want to Exit or want to go to Main: "<<endl<<endl;
	cout<<"1. Main"<<endl;
	cout<<"2. Exit"<<endl;
	cin>>a; 
	
	if(a==1)
	{
		PRINT();
	}
	else
	{
		cout<<"---------------------------------------------------"<<endl;
		cout<<"EXITING THE APP, THANKYOU!";
	} 
}
		
		enum Meal{
			No_Meal=1,
			Breakfast,
			Lunch,
			Dinner
		};
		
		void pMeal()
		{
		    int choice;
			cout<<"1. No_Meal"<<endl;
			cout<<"2. Breakfast"<<endl;
			cout<<"3. Lunch"<<endl;
			cout<<"4. Dinner"<<endl<<endl;
			cout<<"---------------------------------------------------"<<endl;
	do{	
			cout<<"What you want to go for?: ";
			cin>>choice;
			Meal m;
			
			 switch (choice) {
        case 1:
            m=No_Meal;
            break;
        case 2:
            m=Breakfast;
            break;
         case 3:
            m=Lunch;
            break;
         case 4:
            m=Dinner;
            break;
        default:
            cout << "Invalid choice"<<endl;
    }
    }while(choice>4); 
	        char more;
			int MAX_items=10;
			int itemCount=0;
			int quantities[MAX_items];
			string items[MAX_items];
			switch (choice)
			{
				case No_Meal:
			cout<<"NO MEAL REQUIRED";
					break; 
							
			case Breakfast:
			
			do{
				
			int choose;
			int quantity;	
				
			cout<<"     * * * * * * * * * *     "<<endl;
			cout<<"     *                 *     "<<endl;
			cout<<"     *    BREAKFAST    *     "<<endl;
			cout<<"     *                 *     "<<endl;
			cout<<"     * * * * * * * * * *     "<<endl<<endl;
			
			cout<<"1. CHICKEN KARAHI AND PARATHA"<<endl;
			cout<<"2. EGG BREAD"<<endl;
			cout<<"3. SIKKAY KI LASSI"<<endl;
			cout<<"4. COFFEE"<<endl;
			cout<<"5. TEA"<<endl;
			
			cout<<"What you like in breakfast: ";
			cin>>choose;
			cout<<endl;
			switch(choose)
			{
			case 1:
                cout << "You chose: CHICKEN KARAHI AND PARATHA" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "CHICKEN KARAHI AND PARATHA";
                quantities[itemCount] = quantity;
                break;
            case 2:
                cout << "You chose: EGG BREAD" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "EGG BREAD";
                quantities[itemCount] = quantity;
                break;
            case 3:
                cout << "You chose: SIKKAY KI LASSI" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "SIKKAY KI LASSI";
                quantities[itemCount] = quantity;
                break;
            case 4:
                cout << "You chose: COFFEE" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "COFFEE";
                quantities[itemCount] = quantity;
                break;
            case 5:
                cout << "You chose: TEA" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "TEA";
                quantities[itemCount] = quantity;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
			}
			itemCount++;
			if(itemCount >= MAX_items)
			{
			cout << "You have reached the maximum number of items." << endl;
            break;
			}
			cout<<"Want something else: ";
			cin>>more;
			cout<<endl;
		     }while(more=='y'||more=='Y');	
		     
		     cout<<"Selected items: "<<endl;
		     for(int i=0; i<itemCount; ++i)
		     {
		     	cout<<items[i]<<" (Quantity: "<<quantities[i]<<")"<<endl;
			 }
			 break;
			
			case Lunch:
			do{
			int choose;
			int quantity;	
			cout<<"     * * * * * * * * * *     "<<endl;
			cout<<"     *                 *     "<<endl;
			cout<<"     *      LUNCH      *     "<<endl;
			cout<<"     *                 *     "<<endl;
			cout<<"     * * * * * * * * * *     "<<endl<<endl;
			
			cout<<"1. AFGHANI TIKKA"<<endl;
			cout<<"2. KABLI PULAO"<<endl;
			cout<<"3. MUTTON KARAHI"<<endl;
			cout<<"4. CHICKEN KARAHI"<<endl;
			cout<<"5. BIRYANI"<<endl;
		    cout<<"---------------------------------------------------"<<endl;
			
			cout<<"What you like in Lunch: ";
			cin>>choose;
			cout<<endl;
			switch(choose)
			{
			case 1:
                cout << "You chose: AFGHANI TIKKA" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "AFGHANI TIKKA";
                quantities[itemCount] = quantity;
                break;
            case 2:
                cout << "You chose: KABLI PULAO" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "KABLI PULAO";
                quantities[itemCount] = quantity;
                break;
            case 3:
                cout << "You chose: MUTTON KARAHI" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "MUTTON KARAHI";
                quantities[itemCount] = quantity;
                break;
            case 4:
                cout << "You chose: CHIKEN KARAHI" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "CHICKEN KARAHI";
                quantities[itemCount] = quantity;
                break;
            case 5:
                cout << "You chose: BIRYANI" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "BIRYANI";
                quantities[itemCount] = quantity;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
			}
			itemCount++;
			if(itemCount >= MAX_items)
			{
			cout << "You have reached the maximum number of items." << endl;
            break;
			}
			cout<<"Want something else: ";
			cin>>more;
			cout<<endl;
		     }while(more=='y'||more=='Y');	
		     
		     cout<<"Selected items: "<<endl;
		     for(int i=0; i<itemCount; ++i)
		     {
		     	cout<<items[i]<<" (Quantity: "<<quantities[i]<<")"<<endl;
			 }
			break;
			
			case Dinner:
			do{
				int choose;
				int quantity;
			cout<<"     * * * * * * * * * *     "<<endl;
			cout<<"     *                 *     "<<endl;
			cout<<"     *     DINNER      *     "<<endl;
			cout<<"     *                 *     "<<endl;
			cout<<"     * * * * * * * * * *     "<<endl<<endl;
			
			cout<<"1. NAMKEEN DUMBA KARAHI"<<endl;
			cout<<"2. DAM PUKHT"<<endl;
			cout<<"3. MUTTON KARAHI"<<endl;
			cout<<"4. CHAPLI KABAB"<<endl;
			cout<<"5. BBQ"<<endl;
			cout<<"---------------------------------------------------"<<endl;
			
			cout<<"What you like in Dinner: ";
			cin>>choose;
			cout<<endl;
			switch(choose)
			{
			case 1:
                cout << "You chose: NAMKEEN DUMBA KARAHI" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "NAMKEEN DUMBA KARAHI";
                quantities[itemCount] = quantity;
                break;
            case 2:
                cout << "You chose: DAM PUKHT" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "DAM PUKHT";
                quantities[itemCount] = quantity;
                break;
            case 3:
                cout << "You chose: MUTTON KARAHI" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "MUTTON KARAHI";
                quantities[itemCount] = quantity;
                break;
            case 4:
                cout << "You chose: CHAPLI KABAB" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "CHAPLI KABAB";
                quantities[itemCount] = quantity;
                break;
            case 5:
                cout << "You chose: BBQ" << endl;
                cout << "Enter quantity: ";
                cin >> quantity;
                items[itemCount] = "BBQ";
                quantities[itemCount] = quantity;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
			}
			itemCount++;
			if(itemCount >= MAX_items)
			{
			cout << "You have reached the maximum number of items." << endl;
            break;
			}
			cout<<"Want something else: ";
			cin>>more;
			cout<<endl;
		     }while(more=='y'||more=='Y');	
		     
		     cout<<"Selected items: "<<endl;
		     for(int i=0; i<itemCount; ++i)
		     {
		     	cout<<items[i]<<" (Quantity: "<<quantities[i]<<")"<<endl;
			 }
			
		    	default:
			cout<<"INVALID SELECTION."<<endl;
				break;
			
			}
    cout<<"---------------------------------------------------"<<endl;
	cout<<"Want to Exit or want to go to Main: "<<endl<<endl;
	cout<<"1. Main"<<endl;
	cout<<"2. Exit"<<endl;
	cin>>a; 
	
	if(a==1)
	{
		PRINT();
	}
	else
	{
		cout<<"EXITING THE APP, THANKYOU!";
	} 
		
	}
		
		void Gymnasium()
		{
			int n;		
			cout<<"     * * * * * * * * * * * * * *       * * * * * * * * * * * * * *      "<<endl;
	        cout<<"     *     1. BADMINTON        *       *      2. SWIMMING        *      "<<endl;
	        cout<<"     * * * * * * * * * * * * * *       * * * * * * * * * * * * * *      "<<endl<<endl;
		        
		    cout<<"     * * * * * * * * * * * * * *       * * * * * * * * * * * * * *      "<<endl;
	        cout<<"     *       3. GYM            *       *      4. BASKETBALL      *      "<<endl;
	        cout<<"     * * * * * * * * * * * * * *       * * * * * * * * * * * * * *      "<<endl<<endl;
	
			cout<<"WHICH SPORTS WOULD YOU LIKE TO ADD UP: ";
			cin>>n;
			cout<<"---------------------------------------------------"<<endl;
			cout<<endl;
			do{
			switch(n)
			{
				    case 1:
					cout<<"YOUR SELECTED SPORT IS BADMINTON. THANKYOU!"<<endl;
					cout<<"---------------------------------------------------"<<endl;
					break;
					
					case 2:
					cout<<"YOUR SELECTED SPORT IS SWIMMING. THANKYOU!"<<endl;
					cout<<"---------------------------------------------------"<<endl;
					break;
					
					case 3:
					cout<<"YOUR SELECTED SPORT IS GYM. THANKYOU!"<<endl;
					cout<<"---------------------------------------------------"<<endl;
					break;
					
					case 4:
					cout<<"YOUR SELECTED SPORT IS BASKETBALL. THANKYOU!"<<endl;
					cout<<"---------------------------------------------------"<<endl;
					break;
					
					default:
					cout<<"INVALID SELECTION. PLEASE TRY AGAIN!";	
			}
		}while(n>4);
	
	cout<<"Want to Exit or want to go to Main: "<<endl<<endl;
	cout<<"1. Main"<<endl;
	cout<<"2. Exit"<<endl;
	cin>>a; 
	
	if(a==1)
	{
		PRINT();
	}
	else
	{
		cout<<"EXITING THE APP, THANKYOU!";
	} 
			
	}
		
		enum Fun{
			Movies=1,
			Videogame,
			Gokarting,
			Paintball
		};    	
	void Entertainment() {
		
		int option;
			cout<<"1. Movie"<<endl;
			cout<<"2. Video Games"<<endl;
			cout<<"3. Go Karting"<<endl;
			cout<<"4. Paint Ball"<<endl<<endl;
	do{	
			cout<<"What you want to go for?: ";
			cin>>option;
			Fun f;
			
			 switch (option) 
			 {
        case 1:
            f=Movies;
            break;
        case 2:
            f=Videogame;
            break;
         case 3:
            f=Gokarting;
            break;
         case 4:
            f=Paintball;
            break;
        default:
            cout << "Invalid choice"<<endl;
    }
    }while(option>4);
    
    Movie movie;
    VideoGame game;
    GoKarting karting;
    PaintBall paintball;
    
    switch(option){
    case Movies:
        movie.inputDetails();
        cout<<"Entertainment options: "<<endl;
        movie.display(); 
	break;
	
	case Videogame:	 
        game.inputDetails();
        game.display();
    break;
	
	case Gokarting: 
        karting.inputDetails();
        karting.display();
    break;
	
	case Paintball:
        paintball.inputDetails();
        paintball.display();
    break;
    } 
	cout<<"Want to Exit or want to go to Main: "<<endl<<endl;
	cout<<"1. Main"<<endl;
	cout<<"2. Exit"<<endl;
	cin>>a; 
	
	if(a==1)
	{
		PRINT();
	}
	else
	{
		cout<<"EXITING THE APP, THANKYOU!";
	} 
    }		
};
		
		void Signup(Hotel &h) {
    cout << "     * * * * * * * * * *     " << endl;
    cout << "     *                 *     " << endl;
    cout << "     *     SIGNUP      *     " << endl;
    cout << "     *                 *     " << endl;
    cout << "     * * * * * * * * * *     " << endl;

    cout << "Enter your name: ";
    getline(cin, h.name);
    cout << "Enter your username: ";
    cin >> h.user1;
    cout << "Enter your email: ";
    cin >> h.mail;
    cout << "Enter your age: ";
    cin >> h.age;
    
    do {
    	cout << "Create your password: ";
    cin >> h.pass;
        cout << "Confirm your password: ";
        cin >> h.pass1;

        if (h.pass != h.pass1) 
		{
            cout << "Passwords do not match. Please try again." << endl;
		}
    } while (h.pass != h.pass1); // Loop until a successful signup
    
    cout<<"  SIGN-UP SUCCESSFUL!  "<<endl;
    h.Login();
}

int main()
{
	Hotel h1;
    h1.PRINT();
    //Signup(h1);

	
	return 0;
}

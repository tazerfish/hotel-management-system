#include<iostream>
using namespace std;

class Hotel{
	int age;
	int member;
	public:
		string name;
		string user,   user1;
		string pass, pass1;
		string mail;
		
		Hotel(int m=0, int a=0)
		{
		   member=m;
		   age=a;	
		}
		 void Signup(Hotel& h1);
		 void Login(Hotel& h1);
		
		
};

void Hotel::Signup(Hotel &h) {
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
    cout << "Create your password: ";
    cin >> h.pass;
    do {
        cout << "Confirm your password: ";
        cin >> h.pass1;

        if (h.pass == h.pass1) {
            cout << "SIGN UP SUCCESSFUL" << endl;
            //h.Login(h);
            break; // Exit the loop after successful signup
        } else {
            cout << "Passwords do not match. Please try again." << endl;
        }
    } while (h.pass != h.pass1); // Loop until a successful signup
}

void Hotel::Login(Hotel& h1)
		{
			
			cout<<"     * * * * * * * * * *     "<<endl;
			cout<<"     *                 *     "<<endl;
			cout<<"     *      LOGIN      *     "<<endl;
			cout<<"     *                 *     "<<endl;
			cout<<"     * * * * * * * * * *     "<<endl;
			do{
			if(h1.user==h1.user1 && h1.pass==h1.pass1)
			{
		    cout<<"Enter your username: ";
			cin>>h1.user;
			cout<<"Enter your Password: ";
			cin>>h1.pass;
			
			cout<<"LOGIN SUCCESSFUL: ";
	        }
	       
		    else
	        {
			cout<<"Incorrect username or password. Please Try again."<<endl;
			}
	          }while(h1.user!=h1.user1 || h1.pass!=h1.pass1);
		}

int main()
{
	Hotel h1;
	h1.Signup(h1);
	h1.Login(h1);
	
	
	return 0;
}

//admin sys


#include <iostream>
#include<string>
using namespace std;

class employee{
private:    
    string name;
    string designation;
}
class admin:public employee{
private:
    string userid;
    string pass;
    vector<string>users;
    vector<employee>employees;
public:
    void add_user(string user /* of type user */ )
    
    user/*user.name*/.push_back(user)
    

    bool check_user(string user){
        for(int i=0;i<=users.size;i++){
            if(user==users[i]){
                cout<<"user found";
                return true;          
            }
        }
    }
void add_user(string user /* of type user */ )
    
    user/*user.name*/.push_back(user)
    
}


}; 

int main()
{
    

    return 0;
}

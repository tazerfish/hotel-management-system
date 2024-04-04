#include<iostream>
using namespace std;

#define food 500
#define room 25000
#define addon 1000

float taxroom(int a){
    cout << "How many rooms would you like to take? " << endl;
    cin >> a;
    float endpriceroom = a * ((2.5/100) * room);
    return endpriceroom;
}

float taxfood(){
    cout << "How many meals would you like to take? " << endl;
    int a;
    cin >> a;
    float endpricefood = a * ((1.5/100) * food);
    return endpricefood;
}

float taxaddon(){
    cout << "Subscribing for addons would give you access to all 3 utilities including swimming pool, gymnasium and our gaming room" << endl;
    float endpriceaddon = ((2.0/100) * addon);
    return endpriceaddon;
}

float price(float endpriceroom, float endpriceaddon, float endpricefood){
    float totalprice = endpriceaddon + endpriceroom + endpricefood;
    return totalprice;
}

int main(){
    int a;
    float endpriceroom = taxroom(a);
    float endpriceaddon = taxaddon();
    float endpricefood = taxfood();
    float total = price(endpriceroom, endpriceaddon, endpricefood);
    
    cout << "Total Price: " << total << endl;
    return 0;
}




#include <iostream>
#include <windows.h>

using namespace std;



int main() {
    system("COLOR 7D"); // Set console color
    system("cls"); // Clear console
    // Draw top and bottom borders
    for (int i = 1; i <= 120; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;
      // Draw left and right borders
    for (int i = 100; i >= 100; i--) {
        std::cout << "|" << std::string(68, ' ') << "|" << std::endl;
    }

    // Draw top and bottom borders again
   // for (int i = 1; i <= 70; i++) {
   //     std::cout << "-";
   // }
   // std::cout << std::endl;


    cout << "\n\n\n\t\t\t\t\t((Welcome to the hotel management system))" << endl;
    cout << "\n\n\n\t\t1) Logint\t\t\t\t\t\t\t\t2) Sign Up" << endl;
    cout << "\n\n\n\n\t\t3) Sign Up\t\t\t\t\t\t\t\t4) Quit Program" << endl;



    int choice;
    cin >> choice; // Get user input

    // Handle user input
    switch (choice) {
        case 1:
            // Login code here
            break;
        case 2:
            // Sign Up code here
            break;
        case 3:
            // Sign Up code here (same as case 2)
            break;
        case 4:
            // Quit program code here
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }

    return 0;
}

//Made by Abubakar Aamir .
//C++ program to find out the months in a year .

                     //PSEUDOCODE OF THIS CODE: 
// 1. Start
// 2. Declare variable month as an integer
// 3. Output "Enter any number from 1 to 11: "
// 4. Input month
// 5. Start switch statement on month
//     6. Case 1: Output "1 Month is : January"
//     7. Case 2: Output "2 Month is : February"
//     8. Case 3: Output "3 Month is : March"
//     9. Case 4: Output "4 Month is : April"
//     10. Case 5: Output "5 Month is : May"
//     11. Case 6: Output "6 Month is : June"
//     12. Case 7: Output "7 Month is : July"
//     13. Case 8: Output "8 Month is : August"
//     14. Case 9: Output "9 Month is : September"
//     15. Case 10: Output "10 Month is : October"
//     16. Case 11: Output "11 Month is : November"
//     17. Default: Output "Bro there are only 11 months in a year"
//     18. End switch
//      19. End
#include <iostream>  
using namespace std;
int main() {
    int month; // Declaration of a  integar varaible named month.
    cout << "Enter any number from 1 to 11: "; //Cout<< is used to print the message on the screen like printf in c language.
    cin >> month; // Cin>> is used to take input from the user like scanf function in c language.


    switch (month) {
        case 1:
            cout << "1 Month is : January ";
            break;
        case 2:
            cout << "2 Month is : February ";
            break;
        case 3:
            cout << "3 Month is : March ";
            break;
        case 4:
            cout << "4 Month is : April ";
            break;
        case 5:
            cout << "5 Month is : May ";
            break;
        case 6:
            cout << "6 Month is : June ";
            break;
        case 7:
            cout << "7 Month is : July ";
            break;
        case 8:
            cout << "8 Month is : August  ";
            break;
        case 9:
         cout << "9 Month is : September ";
            break;
        case 10:
            cout << "10 Month is : October ";
            break;
        case 11:
            cout << "11 Month is : November ";
            break;
        default:
            cout << "Bro there are only 11 months in a year ";
            break;
    }

    return 0;
}
//Made by :Abubakar Aamir .
//Write a C++ program that takes input regarding a student's personal details and marks obtained in various subjects, calculates the percentage, assigns a grade, and provides remarks based on the obtained percentage."
 
                      //PSEUDOCODE OF THIS PROGRAM:


// 1. Start

// 2. Input student details: Name, Fathername, rollno, semester

// 3. Input marks for subjects: calculus, pst, Pf, english, Ds

// 4. Calculate total obtained marks: obtained = calculus + pst + Pf + english + Ds

// 5. Calculate percentage: percentage = (obtained / 500) * 100

// 6. Output student details and marks

// 7. Determine grade based on percentage:
//    - If percentage >= 80, output "Grade A-1"
//    - Else if percentage >= 70, output "Grade A"
//    - Else if percentage >= 60, output "Grade B"
//    - Else if percentage >= 50, output "Grade C"
//    - Else if percentage >= 40, output "Grade D"
//    - Else if percentage >= 33, output "Grade E"
//    - Else, output "Grade F== fail"

// 8. Determine remarks based on percentage:
//    - If percentage >= 80, output "Remarks: Excellent"
//    - Else if percentage >= 70, output "Remarks: Very good"
//    - Else if percentage >= 60, output "Remarks: Good"
//    - Else if percentage >= 50, output "Remarks: Fair"
//    - Else if percentage >= 40, output "Remarks: Poor"
//    - Else if percentage >= 33, output "Remarks: You need a lot of improvement"
//    - Else, output "Remarks: Bring your parents tomorrow"

// 9. End


#include <iostream>
#include <string>

using namespace std;


    int main() {
    string Name, Fathername;// String data type  character ke liye use karte ha aur humne bhi kiya ha 
    int rollno, semester;//// Taking rollnumber and semester in integar data type because number type ka data type ha hamara
    int calculus, pst, Pf, english, Ds, obtained, percentage;// taking more integars for subjects marks

    cout << "Enter your name: ";//Cout<< is used to print the message like printf();
    cin >> Name;// cin>> is used t0 taking input from the user like scanf();

    cout << "Enter your father's name: ";
    cin >> Fathername;

    cout << "Enter your roll number: ";
    cin >> rollno;

    cout << "Enter your semester: ";
    cin >> semester;

    cout << "Enter your marks for each subject:" << endl;
    
    cout << "Calculus: ";
    cin >> calculus;
    
    cout << "English: ";
    cin >> english;
    
    cout << "PST: ";
    cin >> pst;
    
    cout << "Discrete structure: ";
    cin >> Ds;
    
    cout << "Programming Fundamentals: ";
    cin >> Pf;

//upper humne aik obtained ka variable banaya tha ab usmei sare subjects ke marks ko plus karwa diya ha humne
    obtained = english + Pf + Ds + pst + calculus;
    percentage = obtained * 100 / 500;

    cout << "-----------Marksheets-------------------" << endl;
    cout << "Your Name is " << Name << endl;
    cout << "Your Father's Name is " << Fathername << endl;
    cout << "Your Class is " << semester << endl;
    cout << "Your Roll no is " << rollno << endl;
    cout << "Your obtained marks is " << obtained << endl;
    cout << "Your percentage is " << percentage << endl;

//using if and else if condition to find:agar number 80 ha toh your grade is A-1 :and so on
    if (percentage >= 80)
        cout << "Grade A-1" << endl;
    else if (percentage >= 70)
        cout << "Grade A" << endl;
    else if (percentage >= 60)
        cout << "Grade B" << endl;
    else if (percentage >= 50)
        cout << "Grade C" << endl;
    else if (percentage >= 40)
        cout << "Grade D" << endl;
    else if (percentage >= 33)
        cout << "Grade E" << endl;
    else
        cout << "Grade F== fail" << endl;

//here we give the remarks (agar 80 se zada ha toh exellent and so on)
    if (percentage >= 80)
        cout << "Remarks: Excellent" << endl;
    else if (percentage >= 70)
        cout << "Remarks: Very good" << endl;
    else if (percentage >= 60)
        cout << "Remarks: Good" << endl;
    else if (percentage >= 50)
        cout << "Remarks: Fair" << endl;
    else if (percentage >= 40)
        cout << "Remarks: Poor" << endl;
    else if (percentage >= 33)
        cout << "Remarks: You need a lot of improvement" << endl;
    else
        cout << "Remarks: Bring your parents tomorrow" << endl;


    return 0;
}
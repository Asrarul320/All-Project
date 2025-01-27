#include <iostream> // For input and output
using namespace std;

int main() {
    string studentName;    // To store the student's name
    long long rollNumber;  // Changed to long long to handle large roll numbers
    float marks[5];        // Array to store marks for 5 subjects
    float total = 0;       // To calculate the total marks
    float percentage;      // To calculate the percentage
    char grade;            // To store the grade

    // Input: Get student details
    cout << "Enter Student Name: ";
    getline(cin, studentName); // Read the full name
    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cin.ignore(); // Clear leftover newline character from input buffer

    // Input: Get marks for 5 subjects
    cout << "Enter marks for 5 subjects (out of 100):\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];

        // Validate marks input (0 to 100)
        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks! Please enter marks between 0 and 100.\n";
            i--; // Repeat the current subject
            continue;
        }
        total += marks[i]; // Add marks to total
    }

    // Calculate percentage
    percentage = (total / 500) * 100;

    // Determine grade based on percentage
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output: Display the student's report
    cout << "\n*** Student Report ***\n";
    cout << "Name: " << studentName << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    // Check if the student has passed or failed
    if (grade == 'F') {
        cout << "Status: Failed\n";
    } else {
        cout << "Status: Passed\n";
    }

    return 0;
}

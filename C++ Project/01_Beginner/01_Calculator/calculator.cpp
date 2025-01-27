#include <iostream> // Input/Output operations ke liye library include ki gayi hai
using namespace std; // Standard namespace use karne ke liye

// Function to display the calculator menu
void displayMenu() {
    cout << "\n*** Calculator Menu ***\n";
    cout << "1. Addition (+)\n";            // Option for addition
    cout << "2. Subtraction (-)\n";        // Option for subtraction
    cout << "3. Multiplication (*)\n";     // Option for multiplication
    cout << "4. Division (/)\n";           // Option for division
    cout << "5. Exit\n";                   // Option to exit the program
    cout << "Enter your choice: ";         // user to enter their choice
}

int main() {
    int choice;        // Variable to store user's menu choice
    double num1, num2; // Variables to store the two numbers input by the user
    double result;     // Variable to store the result of the calculation

    // Infinite loop to repeatedly show the menu and perform calculations
    while (true) {
        displayMenu(); // Call the function to display the menu
        cin >> choice; // Take user's menu choice as input

        // Check if the user wants to exit
        if (choice == 5) {
            cout << "Exiting the calculator. Goodbye!\n";
            break; // Exit the loop and terminate the program
        }

        // Check for invalid menu choice
        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please try again.\n";
            continue; // Skip the rest of the loop and start again
        }

        // Take input for the two numbers
        cout << "Enter first number: ";
        cin >> num1; // Store the first number in num1
        cout << "Enter second number: ";
        cin >> num2; // Store the second number in num2

        // Perform the calculation based on the user's choice
        switch (choice) {
            case 1: // Case for addition
                result = num1 + num2; // Add the two numbers
                cout << "Result: " << result << endl;
                break;

            case 2: // Case for subtraction
                result = num1 - num2; // Subtract the second number from the first
                cout << "Result: " << result << endl;
                break;

            case 3: // Case for multiplication
                result = num1 * num2; // Multiply the two numbers
                cout << "Result: " << result << endl;
                break;

            case 4: // Case for division
                if (num2 == 0) { // Check if the second number is zero
                    cout << "Error: Division by zero is not allowed.\n";
                } else {
                    result = num1 / num2; // Divide the first number by the second
                    cout << "Result: " << result << endl;
                }
                break;

            default: // Default case (should not occur due to earlier checks)
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0; // End of the program
}

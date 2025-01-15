#include <iostream>
#include <cmath> // For M_PI and pow() functions

using namespace std;

// Function declarations
void Operations(int choice);
void Oval();
void Parallelogram();
void Trapezium();
void Kite();
void showResults(double result);

int main() {
    int userChoice;

    // Loop to keep asking for operations until the user decides to exit
    while (true) {
        // Display the menu
        cout << "\nChoose an operation:\n";
        cout << "1. Calculate Area of an Oval\n";
        cout << "2. Calculate Area of a Parallelogram\n";
        cout << "3. Calculate Area of a Trapezium\n";
        cout << "4. Calculate Area of a Kite\n";
        cout << "5. Exit the program\n";
        cout << "Enter your choice: ";
        cin >> userChoice;

        // Call Operations function with user input choice
        Operations(userChoice);

        // If the user chooses to exit, break the loop
        if (userChoice == 5) {
            break;
        }
    }

    return 0;
}

// Function to handle user choice and call the corresponding area function
void Operations(int choice) {
    switch(choice) {
        case 1:
            Oval(); // Calculate area of oval
            break;
        case 2:
            Parallelogram(); // Calculate area of parallelogram
            break;
        case 3:
            Trapezium(); // Calculate area of trapezium
            break;
        case 4:
            Kite(); // Calculate area of kite
            break;
        case 5:
            cout << "Exiting the program.\n"; // Exit message
            break;
        default:
            cout << "Invalid choice! Please enter a valid option.\n"; // Handle invalid input
    }
}

// Function to calculate the area of an Oval (Ellipse)
void Oval() {
    double a, b, area;
    cout << "Enter the length of the semi-major axis (a): ";
    cin >> a;
    cout << "Enter the length of the semi-minor axis (b): ";
    cin >> b;
    area = M_PI * a * b; // Area formula for ellipse
    showResults(area); // Show the result
}

// Function to calculate the area of a Parallelogram
void Parallelogram() {
    double base, height, area;
    cout << "Enter the base length: ";
    cin >> base;
    cout << "Enter the height: ";
    cin >> height;
    area = base * height; // Area formula for parallelogram
    showResults(area); // Show the result
}

// Function to calculate the area of a Trapezium
void Trapezium() {
    double a, b, height, area;
    cout << "Enter the length of the first parallel side (a): ";
    cin >> a;
    cout << "Enter the length of the second parallel side (b): ";
    cin >> b;
    cout << "Enter the height: ";
    cin >> height;
    area = 0.5 * (a + b) * height; // Area formula for trapezium
    showResults(area); // Show the result
}

// Function to calculate the area of a Kite
void Kite() {
    double d1, d2, area;
    cout << "Enter the length of the first diagonal (d1): ";
    cin >> d1;
    cout << "Enter the length of the second diagonal (d2): ";
    cin >> d2;
    area = 0.5 * d1 * d2; // Area formula for kite
    showResults(area); // Show the result
}

// Function to display the result of the area calculation
void showResults(double result) {
    cout << "The area is: " << result << endl;
}

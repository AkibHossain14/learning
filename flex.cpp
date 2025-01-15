#include <iostream>
#include <vector>
#include <limits>
using namespace std;

// Function to find the maximum value in the array
int findMax(const vector<int>& arr) {
    int maxVal = INT_MIN; // Set to minimum possible integer
    for (int num : arr) {
        if (num > maxVal) {
            maxVal = num;
        }
    }
    return maxVal;
}

// Function to find the minimum value in the array
int findMin(const vector<int>& arr) {
    int minVal = INT_MAX; // Set to maximum possible integer
    for (int num : arr) {
        if (num < minVal) {
            minVal = num;
        }
    }
    return minVal;
}

// Function to calculate the average of the array
double calculateAverage(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return static_cast<double>(sum) / arr.size(); // Return average as double
}

// Function to display the array
void displayArray(const vector<int>& arr) {
    cout << "Array elements: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Main program
int main() {
    // Initialize the array with user input
    vector<int> numbers;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n; // User enters the size of the array

    // Read the elements from the user
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num); // Add number to the array
    }

    // Display the array
    displayArray(numbers);

    // Find and display the maximum value
    int maxVal = findMax(numbers);
    cout << "Maximum value: " << maxVal << endl;

    // Find and display the minimum value
    int minVal = findMin(numbers);
    cout << "Minimum value: " << minVal << endl;

    // Calculate and display the average
    double avg = calculateAverage(numbers);
    cout << "Average value: " << avg << endl;

    // Check if the average is greater than the max value
    if (avg > maxVal) {
        cout << "The average is greater than the maximum value!" << endl;
    } else {
        cout << "The average is not greater than the maximum value." << endl;
    }

    // Check if the array is sorted
    bool isSorted = true;
    for (size_t i = 1; i < numbers.size(); i++) {
        if (numbers[i] < numbers[i - 1]) {
            isSorted = false;
            break;
        }
    }
    if (isSorted) {
        cout << "The array is sorted in non-decreasing order." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    // Reverse the array and display it
    cout << "Reversed array: ";
    for (int i = numbers.size() - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Display a summary message
    cout << "Thank you for using the program!" << endl;

    return 0;
}


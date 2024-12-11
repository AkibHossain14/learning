#include <iostream>
using namespace std;

int main() {
    int start, end, evenSum = 0;

    // Take two integer inputs from the user
    cout << "Enter the first number: ";
    cin >> start;
    cout << "Enter the second number: ";
    cin >> end;

    // Ensure the range is in increasing order
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    // Loop through numbers in the range
    for (int num = start + 1; num < end; num++) {
        if (num % 2 == 0) { // Check if the number is even
            evenSum += num;
        }
    }

    // Display the result
    cout << "The sum of even numbers between " << start << " and " << end << " is: " << evenSum << endl;

    return 0;
}

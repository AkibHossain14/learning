#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;



    int arr[n];


    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    int largest = arr[0];
    int secondLargest = -1;


    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "The largest element is: " << largest << endl;

    if (secondLargest == -1)
    {
        cout << "There is no second largest element." << endl;
    }
    else
    {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    getch ();
}


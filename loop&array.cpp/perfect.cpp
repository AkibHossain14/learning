#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    cout << "how many numbers you want to check: ";
    cin >> n;

    int numbers[n];

    cout << "Enter " <<n <<  " integers: ";
    for (int i = 0; i<n; i++)
    {
        cin >> numbers[i];
    }


    for (int i = 0; i < n; i++)
    {
        int num = numbers[i];
        int sum = 0;


        for (int j = 1; j < num; j++)
        {
            if (num % j == 0)
            {
                sum += j;
            }
        }

        if (sum == num)
        {
            cout << num << " is Perfect" << endl;
        }
        else
        {
            cout << num << " is Not Perfect" << endl;
        }
    }

    getch ();
}


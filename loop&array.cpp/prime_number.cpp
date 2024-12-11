#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    int numbers[n];


    cout << "Enter" <<n <<"integers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++)
    {
        int num = numbers[i];
        bool isPrime = true;

        if (num < 2)
        {
            isPrime = false;
        }
        else
        {
            for (int j = 2; j < num; j++)
            {
                if (num % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
            {
                cout << num << " is Prime" << endl;
            }
            else
            {
                cout << num << " is Not Prime" << endl;
            }
        }


    }
    getch ();
}

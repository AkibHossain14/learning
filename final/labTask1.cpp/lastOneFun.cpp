#include <iostream>
using namespace std;

void Find(int num) ;


int main()
{
    int number;
    cout << "Input any number: ";
    cin >> number;

    if (number < 0)
    {
        number = -number;
    }

    Find(number);

    return 0;
}
void Find(int num)
{
    int frequency[10] = {0};


    while (num > 0)
    {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }


    for (int i = 0; i < 10; i++)
    {
        cout << "The frequency of " << i << " = " << frequency[i] << endl;
    }
}

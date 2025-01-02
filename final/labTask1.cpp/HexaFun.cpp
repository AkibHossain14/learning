#include <iostream>
using namespace std;

void decToHexa(int num);


int main()
{
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;

    cout << "The hexadecimal number is: ";
    decToHexa(decimal);
    cout << endl;

    return 0;
}
void decToHexa(int num)
{
    char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hex[20];
    int index = 0;

    if (num == 0)
    {
        cout << "0";
        return;
    }

    while (num > 0)
    {
        int remainder = num % 16;
        hex[index] = hexDigits[remainder];
        num /= 16;
        index++;
    }


    for (int i = index - 1; i >= 0; i--)
    {
        cout << hex[i];
    }
}

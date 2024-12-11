#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;

    char hex[20];
    int index = 0;
    int num = decimal;
    while (num > 0) {
        int remainder = num % 16;
        if (remainder < 10) {
            hex[index] = remainder + '0';
        } else {
            hex[index] = remainder - 10 + 'A';
        }
        index++;
        num = num / 16;
    }


    cout << "The hexadecimal number is: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << hex[i];
    }
    cout << endl;
getch ();
}


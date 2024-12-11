#include <iostream>
#include <cctype>
using namespace std ;

int main() {
    char input;
    cout << "Enter a character: ";
   cin >> input;

    if (isalpha(input)) {
      cout << "It's a character!" << endl;
    } else {
       cout << "It's not a character." << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;
void UpNoksa (int rows);
void lowNoksa (int rows);
int main()
{
    int rows;
    cout << "Input number of rows : ";
    cin >> rows;

    UpNoksa (rows ) ;
    lowNoksa (rows) ;




    return 0;
}
void UpNoksa (int rows)
{
    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}

void lowNoksa (int rows) {
    for (int i = rows - 1; i >= 1; i--)
    {

        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    }

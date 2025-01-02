#include <iostream>
using namespace std;
void entry (int n, int num[]);
bool isPerfect(int num) ;


int main()
{
    int n;
    cout << "How many numbers do you want to input: ";
    cin >> n;

    int num[n];
    cout << "Enter " << n << " integers:" << endl;

    entry ( n, num);


    cout << "Results:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (isPerfect(num[i]))
            cout << num[i] << " is a Perfect Number" << endl;
        else
            cout << num[i] << " is Not a Perfect Number" << endl;
    }

    return 0;
}
void entry (int n, int num[])
{
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

}
bool isPerfect(int num)
{
    if (num <= 0)
        return false;

    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}


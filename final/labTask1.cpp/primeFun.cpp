#include <iostream>
using namespace std;
void entry(int n , int num[]);
bool isPrime(int num);


int main()
{
    int n;
    cout << "How many numbers do you want to input: ";
    cin >> n;

    int num[n];
    cout << "Enter " << n << " integers:" << endl;
    entry (n, num);

    cout << "Results:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(num[i]))
            cout << num[i] << " is Prime" << endl;
        else
            cout << num[i] << " is Not Prime" << endl;
    }

    return 0;
}
void entry(int n , int num[]){
for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
}
bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}



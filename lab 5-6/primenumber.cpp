#include <iostream>
using namespace std;
int main() 
{
    int N;
    cout << "Enter a number: ";
    cin >> N;
    if (N == 1)
    {
        cout << "Not a prime number";
    }
    else
    {
        bool isPrime = true; 
        for (int i = 2; i < N; i++)
        {
            if (N % i == 0)  
            {
                isPrime = false;  
                break;           
            }
        }
        if (isPrime)
            cout << "Prime number";
        else
            cout << "Not a prime number";
    }

    return 0;
}

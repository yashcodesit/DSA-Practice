#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int count = 0;

    for(int num = 2; num <= n; num++)
    {
        bool isPrime = true;

        for(int i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
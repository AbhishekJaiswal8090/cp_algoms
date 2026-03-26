#include <iostream>
using namespace std;

// Euler totient function counts how many numbers less than or equal to n
//  are coprime with n

int EulerTotient(int n)
{
    int result = n;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {

            while (n % i == 0)
            {
                n /= i;
            }
            result = result - result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main()
{
    int n;
    cin >> n;
    int ans = EulerTotient(n);
    cout << ans << endl;
}
#include <iostream>
#include <vector>
using namespace std;

// sIEVE APPLICATION
// In this lecture we are going to solve the problem finding nth prime number
// And here we are using optimized sieve algorithm

void solve(int n)
{
    if (n == 1)
        cout << 2 << endl;
    return;
    vector<bool> a(n + 1, true);

    // Handline even numbers
    for (int i = 4; i <= n; i += 2)
    {
        a[i] = false;
    }

    // handling odd numbers
    for (int i = 3; i <= n; i += 2)
    {
        if (a[i])
        {
            for (int j = i * i; j <= n; j += 2 * i)
            {
                a[i] = false;
            }
        }
    }
    int cnt = 1; // we already counted 2
    // we don't need to ccheck those even elelments they are already even theres no way it could be prime
    for (int i = 3; i <= n; i += 2)
    {
        if (a[i])
            cnt++;
        if (cnt == n)
        {
            cout << i << endl;
            break;
        }
    }

    return;
}

int main()
{
}
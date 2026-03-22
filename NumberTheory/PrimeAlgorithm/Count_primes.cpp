#include <iostream>
#include <vector>
using namespace std;

// Here ae are counting primes number less than n
// using sieve algom efficiently it works upto 10^7
void Sieve(vector<bool> &a)
{
    a[0] = a[1] = false;
    int N = (int)a.size();
    for (int i = 2; i * i < N; i++)
    {
        if (a[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                a[j] = false;
            }
        }
    }
}

int countPrimes(int n)
{
    if (n < 3)
        return 0;
    vector<bool> a(n, true);
    Sieve(a);

    vector<int> pre(n, 0);
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (a[i])
            cnt++;
        pre[i] = cnt;
    }

    return pre[n - 1];
}

int main()
{
}
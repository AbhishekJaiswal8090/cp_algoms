#include <iostream>
#include <vector>
using namespace std;

// Sieve application
// IN today lecture we are going to study about counting the sum of factors
// Since we already know the mathematical formula we will just implement it
// you can search it on google the formula looks like ->  Sigma(from i to k)(pi^(ai+1)-1)/(pi-1)

void Precompute(vector<long long> &Sieve)
{

    Sieve[0] = Sieve[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (Sieve[i] == 0)
        {
            for (int j = i; j <= n; j += i)
            {
                if (Sieve[j] == 0)
                    Sieve[j] = i;
            }
        }
    }
}

// what we are trying to do here is => find the smallest prime factor of the n
// and since we need their exponents in formula we calculate exponents of every possible prime factors
// and then we keep updating nand calculating ans

void SumofFactors()
{
    int MAX = 10e6;
    vector<long long> Sieve(MAX + 1, 0);
    Precompute(Sieve);

    int n;
    cin >> n;
    int res = 1;
    while (Sieve[n] != 0)
    {
        int spf = Sieve[n];
        int exp = 1;
        while (n % Sieve[n] == 0)
        {
            exp++;
            n /= Sieve[n];
        }
        res *= (pow(spf, exp + 1) - 1) / (spf - 1);
    }
    cout << res - n << endl;
}

int main()
{
}
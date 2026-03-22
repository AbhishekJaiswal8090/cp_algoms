#include <iostream>
#include <vector>
using namespace std;

// Prime factorisation
// IDEA
// Break down n into its prime factors by repeatedly dividing by the smallest possible primes

// Algorthm
vector<int> Factors(int n)
{
    vector<int> facts;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            facts.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        facts.push_back(n);
    return facts;
}

// Time complexity o(root(n));

int main()
{
}
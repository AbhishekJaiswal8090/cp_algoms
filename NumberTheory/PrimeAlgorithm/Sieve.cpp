#include <iostream>
#include <vector>
using namespace std;

// Sieve of Eratosthenes
// It is an ancient algom for finding all prime numbers upto a given limit n efficiently

// Key Idea
// Start with a list of numbers from 2 to n
// Mark multiples of each prime number from 2 as composite

vector<bool> Sieve(int n)
{

    vector<bool> a(n + 1, true);
    a[0] = a[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (a[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                a[j] = false;
            }
        }
    }
    return a;
}

// Time Complexity o(nloglogn) almost linear
// Space Complexity o(n)

// The standard sieve has two limitations
// 1 -> Memory access patterns are cacheinefficient
// 2 -> Memory usage becomes problematic for very large n

// Here are two potimzations we ccan make;
// Only mark multipples of primes upto root(n) beacuse
// All remaining unmarked numbers are primes

vector<bool> OptimizedSieve(int n)
{
    vector<bool> a(n + 1, true);
    a[0] = a[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (a[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                a[j] = false;
            }
        }
    }
    return a;
}
// It reduces number of operations by about 50%
// Other optimizations are ->

// 2. Odd check Sieve (Since we knew that all multiple of 2s are even and composite we don'r need to check them)
// INstead check only for odd primes
// Here the algorithm

vector<bool> SieveFullOptimized(int n)
{
    vector<bool> a(n + 1, true);
    a[0] = a[1] = false;

    // Handle even numbers
    for (int i = 4; i <= n; i += 2)
    {
        a[i] = false;
    }

    for (int i = 3; i * i <= n; i++)
    {
        if (a[i])
        {
            for (int j = i * i; j <= n; j += (2 * i))
            {
                a[j] = false;
            }
        }
    }
    return a;
}

// Sum of divisors using Sieve
vector<int> sum_of_divisors(int n)
{
    vector<int> a(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            a[j] += i;
        }
    }
    return a;
}

int main()
{
}
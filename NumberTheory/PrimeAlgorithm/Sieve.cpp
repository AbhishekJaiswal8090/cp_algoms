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

void OptimizedSieve(int n)
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
}
int main()
{
}
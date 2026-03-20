#include <iostream>
using namespace std;

// IDEA
// A number  n is a prime if and only if it has no other divisors other than 1 and itself
// To test this efficiently only check divisors from 2 to root(n)
// If there are number in bw 2 to root(n) which divides n then number mustn't be a rpime

// Algorithm

bool checkPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Time Complexity - o(toot(n));

int main()
{
}
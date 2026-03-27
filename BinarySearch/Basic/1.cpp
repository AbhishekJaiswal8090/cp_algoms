#include <iostream>
#include <vector>
using namespace std;

// IN today lecture we are going to study about Binary Search
// Binary Search is a searching algorithm for finding an ellement position in a sorted array

// Since we are given sorted arrays here , we wiill utilize this
// First lets tal about linear search

void LinearSearch()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8};
    int key = 8;
    for (int i = 0; i < a.size(); i++)
    {
        if (key == a[i])
        {
            cout << "WE found the element at " << i << "Position" << endl;
            return;
        }
    }
    cout << "Not found" << endl;

    // Here our avg Time cmplexity can be said as o(n);
    // we are trevaresing every single ellemnt from the array
    // the problem is that we are not utilizing the sorted arrays
    // It becames very slow in case n > 10^5 tle may occurs
}

// While in sorted arrays
void BinarySearch()
{
}

int main()
{
}
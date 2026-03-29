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
// we have two pointers one pointing to the beginining of the array and another one points to the last one index
// we calcluate mid index using (l+r)/2 and check if it equal to the element we are searching
// if it is equal retuen true else if it bigger than key element search in the right half else left half
// here the algom

// Iterative
void BinarySearch()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cin >> key;

    int l = 0;
    int r = n - 1;

    while (l <= high)
    {
        int mid = (l + r) / 2;
        if (a[mid] == key)
        {
            cout << "element found";
        }
        else if (a[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}

// Recursive
bool Binary_Search(vector<int> &a, int l, int r, int key)
{
    if (l > r)
        return -1;
    int mid = (l + r) / 2;
    if (a[mid] == key)
        return true;
    else if (a[mid] > key)
    {
        return Binary_Search(a, l, mid - 1, key);
    }
    else
    {
        return Binary_Search(a, mid + 1, r, key);
    }
}
int main()
{
}
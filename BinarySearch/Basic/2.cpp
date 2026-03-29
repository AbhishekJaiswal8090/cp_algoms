#include <iostream>
#include <vector>
using namespace std;

// IN this lecture we are going to study
// upper and lower bound
// lower bound is defined as the element >= the given element
// While upper bound represents element > the given element

int LowerBound(vector<int> &arr, int a)
{
    int l = 0;
    int h = a.size() - 1;
    int idx = -1;
    while (l <= r)
    {
        int mid = (l + h) / 2;
        if (arr[mid] >= a)
        {
            idx = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return idx;
}

int main()
{
}
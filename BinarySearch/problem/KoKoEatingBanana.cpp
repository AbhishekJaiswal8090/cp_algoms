#include <bits/stdc++.h>
using namespace std;

bool speedIsGood(int x, vector<int> &a, int l, int r, int h)
{
    int total_hour = 0;
    for (int i = 0; i < a.size(); i++)
    {
        total_hour += ((a[i] + x - 1) / x);
    }
    return total_hour <= h;
}

void solve()
{
    int n, h;
    cin >> n >> h;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 1;
    int r = *max_element(a.begin(), a.end());
    int ans = l;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (speedIsGood(mid, a, l, r, h))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
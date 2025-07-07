#include <bits/stdc++.h>
using namespace std;

int kokoEat(vector<int> arr, int k)
{

    int low = 1;
    int high = INT16_MIN;
    for (int val : arr)
    {
        high = max(high, val);
    }
    int mid;

    while (low < high)
    {
        mid = low + (high - low) / 2;
        int Total = 0;
        for (int val : arr)
        {
            Total += (val + mid - 1) / mid;
        }
        if (Total <= k)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{

    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    for (int &val : arr)
    {
        cin >> val;
    }

    cout << "Enter the time limit: ";
    cin >> k;

    cout << kokoEat(arr, k);

    return 0;
}
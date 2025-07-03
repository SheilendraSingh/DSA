#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int x, bool findFirst)
{
    int left = 0, right = arr.size() - 1, result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
        {
            result = mid;
            if (findFirst)
                right = mid - 1; // keep looking on left side
            else
                left = mid + 1; // keep looking on right side
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return result;
}

vector<int> find(vector<int> &arr, int x)
{
    // code here
    int first = binarySearch(arr, x, true);
    int last = binarySearch(arr, x, false);
    return {first, last};
}

int main()
{
    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    for (int &val : arr)
    {
        cin >> val;
    }

    cout << "Enter the value: ";
    cin >> x;

    vector<int> res = find(arr, x);

    cout << res[0] << ", " << res[1];
    return 0;
}
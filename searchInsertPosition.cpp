#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
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

    cout << "Enter the targeted value: ";
    cin >> k;

    cout << searchInsert(arr, k);

    return 0;
}
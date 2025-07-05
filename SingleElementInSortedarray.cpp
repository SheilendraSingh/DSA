#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> arr)
{
    int left = 0, right = arr.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (mid % 2 == 1)
            mid--; // align to even index

        // If pair is intact, the single element is in the right half
        if (arr[mid] == arr[mid + 1])
            left = mid + 2;
        else
            right = mid;
    }

    return arr[left];
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter sorted array with all pairs except one element: ";
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    int result = singleNonDuplicate(nums);
    cout << "Single element is: " << result << endl;
    return 0;
}

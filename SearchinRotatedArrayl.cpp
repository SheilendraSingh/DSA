#include <Bits/stdc++.h>
using namespace std;

// Function to search in rotated sorted array
int search(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        // Left half is sorted
        if (nums[left] <= nums[mid])
        {
            if (nums[left] <= target && target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        // Right half is sorted
        else
        {
            if (nums[mid] < target && target <= nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    int target1 = 0;
    int target2 = 3;

    cout << "Index of " << target1 << ": " << search(nums, target1) << endl; // Output: 4
    cout << "Index of " << target2 << ": " << search(nums, target2) << endl; // Output: -1

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return true;

        // Handle duplicates
        if (nums[left] == nums[mid] && nums[mid] == nums[right])
        {
            left++;
            right--;
        }
        // Left half is sorted
        else if (nums[left] <= nums[mid])
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

    return false;
}

int main()
{
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target1 = 0;
    int target2 = 3;

    cout << "Search for " << target1 << ": " << (search(nums, target1) ? "true" : "false") << endl;
    cout << "Search for " << target2 << ": " << (search(nums, target2) ? "true" : "false") << endl;

    return 0;
}

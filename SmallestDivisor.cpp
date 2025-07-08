#include <bits/stdc++.h>
using namespace std;

int computeSum(vector<int> &nums, int divisor)
{
    int sum = 0;
    for (int num : nums)
    {
        sum += (num + divisor - 1) / divisor; // equivalent to ceil(num / divisor)
    }
    return sum;
}

int smallestDivisor(vector<int> &nums, int threshold)
{
    int left = 1, right = *max_element(nums.begin(), nums.end());
    int ans = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int sum = computeSum(nums, mid);

        if (sum <= threshold)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;
    cout << "Smallest Divisor: " << smallestDivisor(nums, threshold) << endl;
    return 0;
}

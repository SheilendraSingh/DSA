#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int res = 0;
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            int diff = abs(sum - target);

            if (sum == target)
            {
                return sum;
            }

            if (diff < mini)
            {
                res = sum;
                mini = diff;
            }

            if (sum < target)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }

    return res;
}

int main()
{
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    int result = threeSumClosest(nums, target);
    cout << "Closest sum to target is: " << result << endl;

    return 0;
}

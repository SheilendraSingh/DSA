#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<vector<int>> res;

    if (n < 4)
        return res;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n - 2; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int left = j + 1;
            int right = n - 1;

            while (left < right)
            {
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                if (sum == target)
                {
                    res.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;
                    left++;
                    right--;
                }
                else if (sum < target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
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
    cout << "Enter the elements: ";
    for (int &num : nums)
    {
        cin >> num;
    }

    cout << "Enter target sum: ";
    cin >> target;

    vector<vector<int>> result = fourSum(nums, target);

    cout << "Quadruplets summing to target:\n";
    for (auto quad : result)
    {
        for (int x : quad)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}

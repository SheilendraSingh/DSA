#include <bits/stdc++.h>
using namespace std;

int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
{
    unordered_map<int, int> map;
    int count = 0;

    // Store all sums of nums1[i] + nums2[j]
    for (int a : nums1)
    {
        for (int b : nums2)
        {
            map[a + b]++;
        }
    }

    // For each pair in nums3 and nums4, look for -(c + d) in the map
    for (int c : nums3)
    {
        for (int d : nums4)
        {
            int complement = -(c + d);
            if (map.find(complement) != map.end())
            {
                count += map[complement];
            }
        }
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter size of each array: ";
    cin >> n;

    vector<int> nums1(n), nums2(n), nums3(n), nums4(n);

    cout << "Enter elements of nums1: ";
    for (int &x : nums1)
        cin >> x;

    cout << "Enter elements of nums2: ";
    for (int &x : nums2)
        cin >> x;

    cout << "Enter elements of nums3: ";
    for (int &x : nums3)
        cin >> x;

    cout << "Enter elements of nums4: ";
    for (int &x : nums4)
        cin >> x;

    int result = fourSumCount(nums1, nums2, nums3, nums4);

    cout << "Number of quadruplets summing to 0: " << result << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &arr, int target)
{
    int n = arr.size();
    vector<vector<int>> res;
    if (n < 4)
        return res;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 3; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        for (int j = i + 1; j < n - 2; j++)
        {
            if (j > i + 1 && arr[j] == arr[j - 1])
                continue;
            int left = j + 1, right = n - 1;
            while (left < right)
            {
                long long sum = (long long)arr[i] + arr[j] + arr[left] + arr[right];
                if (sum == target)
                {
                    res.push_back({arr[i], arr[j], arr[left], arr[right]});
                    while (left < right && arr[left] == arr[left + 1])
                        left++;
                    while (left < right && arr[right] == arr[right - 1])
                        right--;
                    left++;
                    right--;
                }
                else if (sum < target)
                    left++;
                else
                    right--;
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

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int &val : arr)
    {
        cin >> val;
    }

    cout << "Enter the target sum: ";
    cin >> target;

    vector<vector<int>> result = fourSum(arr, target);

    cout << "Quadruplets summing to target:\n";
    for (auto &quad : result)
    {
        for (int num : quad)
        {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}

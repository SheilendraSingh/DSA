#include <bits/stdc++.h>
using namespace std;
int minSubarraySum(vector<int> &arr, int &k)
{
    // optimal approach with sliding window

    int n = arr.size();
    int i = 0, sum = 0;
    int minLen = INT_MAX;

    for (int j = 0; j < n; j++)
    {
        sum += arr[j];
        while (sum >= k)
        {
            minLen = min(minLen, j - (i - 1));
            sum -= arr[i];
            i++;
        }
    }

    // Better approach with prefix sum and binary search
    // int n = arr.size();
    // vector<int> prefix(n + 1, 0);
    // int minLen = INT16_MAX;

    // for (int i = 0; i < n; i++)
    // {
    //     prefix[i + 1] = prefix[i] + arr[i];
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     int required = prefix[i - 1] + k;
    //     auto it = lower_bound(prefix.begin(), prefix.end(), required);
    //     if (it != prefix.end())
    //     {
    //         int j = it - prefix.begin();
    //         minLen = min(minLen, j - (i - 1));
    //     }
    // }
    if (minLen == INT_MAX)
    {
        minLen = 0;
    }
    return minLen;
}

int main()
{

    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for (int &val : arr)
    {
        cin >> val;
    }
    cout << "Enter the targeted sum: ";
    cin >> k;

    cout << minSubarraySum(arr, k);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

pair<int, vector<int>> maxSubArray(vector<int> arr)
{
    int currentSum = 0, maxSum = INT_MIN, s = 0, e = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        currentSum += arr[i];

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            e = i;
        }

        if (currentSum < 0)
        {
            currentSum = 0;
            s = i + 1;
        }
    }

    return {
        maxSum, vector<int>(arr.begin() + s, arr.begin() + e + 1)};
}

int main()
{
    int n, a;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }

    pair<int, vector<int>> ans = maxSubArray(arr);

    cout << "Maximum sum: " << ans.first << "\nThe Sub Array: {";
    for (int i = 0; i < ans.second.size(); i++)
    {
        cout << ans.second[i];
        if (i != ans.second.size() - 1)
            cout << ", ";
    }
    cout << "}";
}
#include <bits/stdc++.h>
using namespace std;

pair<int, int> TwoSum(vector<int> arr, int target)
{
    int n = arr.size();

    // Optimal Approach for returning yes and no
    // not an approach for returning the index
    // Because , because of sorting the index have changed

    // int s = 0, e = n - 1;
    // sort(arr.begin(), arr.end());
    // while (s < e)
    // {
    //     int sum = arr[s] + arr[e];
    //     if (sum == target)
    //     {
    //         return {s, e};
    //     }
    //     else if (sum < target)
    //     {
    //         s++;
    //     }
    //     else
    //     {
    //         e--;
    //     }
    // }

    // Better By hash Map    optimal for return index

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int num1 = arr[i];
        int num2 = target - num1;
        if (mpp.find(num2) != mpp.end())
        {
            return {mpp[num2], i};
        }
        mpp[num1] = i;
    }

    // Brute Force
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; i < n; i++)
    //     {
    //         if (arr[i] + arr[j] == target)
    //         {
    //             return {i, j};
    //         }
    //     }
    // }
    return {-1, -1};
}

int main()
{

    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the targeted sum: ";
    cin >> target;

    for (int &val : arr)
    {
        cin >> val;
    }

    pair<int, int> res = TwoSum(arr, target);

    cout << res.first << ", " << res.second;

    return 0;
}
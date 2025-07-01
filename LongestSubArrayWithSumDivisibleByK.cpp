#include <bits/stdc++.h>
using namespace std;

int longestSubaarayDivK(vector<int> &arr, int k)
{

    int n = arr.size();
    unordered_map<int, int> mpp;
    mpp[0] = -1;

    long long sum = 0;
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        int rem = sum % k;

        if (rem < 0)
            rem += k;
        if (mpp.find(rem) != mpp.end())
        {
            res = max(res, i - mpp[rem]);
        }
        else
        {
            mpp[rem] = i;
        }
    }
    return res;
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
    cout << "Enter the Targeted sum: ";
    cin >> k;

    cout << longestSubaarayDivK(arr, k);
    return 0;
}
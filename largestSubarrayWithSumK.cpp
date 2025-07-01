#include <bits/stdc++.h>
using namespace std;

int LarSubWithSumZero(vector<int> &arr, int k)
{

    int n = arr.size();
    unordered_map<int, int> mpp;
    int res = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            res = i + 1;
        }
        if (mpp.find(sum - k) != mpp.end())
        {
            res = max(res, i - mpp[sum - k]);
        }
        if (mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }
    }

    return res;
}

int main()
{

    int n, k;
    cout << "Enter thesize of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";

    for (int &val : arr)
    {
        cin >> val;
    }
    cout << "Enter the targeted sum: ";
    cin >> k;

    cout << LarSubWithSumZero(arr, k);

    return 0;
}
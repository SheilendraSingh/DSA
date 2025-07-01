#include <bits/stdc++.h>
using namespace std;

int LarSubWithSumZero(vector<int> &arr)
{

    int n = arr.size();
    unordered_map<int, int> mpp;

    int res = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0)
        {
            res = i + 1;
        }
        else if (mpp.find(sum) != mpp.end())
        {
            res = max(res, i - mpp[sum]);
        }
        else
        {
            mpp[sum] = i;
        }
    }

    return res;
}

int main()
{

    int n;
    cout << "Enter thesize of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";

    for (int &val : arr)
    {
        cin >> val;
    }

    cout << LarSubWithSumZero(arr);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int subarrayXor(vector<int> &arr, int &k)
{

    int n = arr.size();
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        xr = xr ^ arr[i];

        int x = xr ^ k;
        count += mpp[x];
        mpp[xr]++;
    }

    return count;
}

int main()
{

    int n, k;

    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    for (int &val : arr)
    {
        cin >> val;
    }

    cout << "Enter the targeted Xor: ";
    cin >> k;

    cout << subarrayXor(arr, k);

    return 0;
}
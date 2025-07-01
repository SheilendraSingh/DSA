#include <bits/stdc++.h>
using namespace std;

vector<int> indexesOfSubSum(vector<int> &arr, int k)
{

    int n = arr.size();
    unordered_map<int, int> mpp;
    int sum = 0;
    int i = 0;

    for (int j = 0; j < n; j++)
    {
        sum += arr[j];

        while (j >= i && sum > k)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == k)
        {
            return {i + 1, j + 1};
        }
    }

    return {-1};
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
    cout << "Enter the targeted sum: ";
    cin >> k;

    vector<int> res = indexesOfSubSum(arr, k);

    for (int val : res)
    {
        cout << val;
    }

    return 0;
}
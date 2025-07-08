#include <bits/stdc++.h>
using namespace std;
int findKthPositive(vector<int> &arr, int k)
{
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        int missingBetween = arr[i] - arr[i - 1] - 1;

        if (missingBetween >= k)
        {
            return arr[i - 1] + k;
        }
        else
        {
            k -= missingBetween;
        }
    }

    // Not enough missing elements in the range
    return -1;
}

int main()
{

    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the Elments in the array: ";

    for (int &val : arr)
    {
        cin >> val;
    }
    cout << "Enter the target: ";
    cin >> k;

    cout << findKthPositive(arr, k);

    return 0;
}
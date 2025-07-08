#include <bits/stdc++.h>
using namespace std;
int findKthPositive(vector<int> &arr, int k)
{
    int left = 0, right = arr.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int missing = arr[mid] - (mid + 1);

        if (missing < k)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left + k;
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
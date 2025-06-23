#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &arr, int n)
{
    int ind = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            ind = i - 1;
            break;
        }
    }
    if (ind == -1)
    {
        reverse(arr.begin(), arr.end());
    }

    for (int i = n - 1; i >= ind; i--)
    {
        if (arr[i] > arr[ind])
        {
            swap(arr[i], arr[ind]);
            break;
        }
    }
    reverse(arr.begin() + ind + 1, arr.end());

    return arr;
}

int main()
{
    int n, a;
    vector<int> arr;
    cout << "Size of the Array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }

    nextPermutation(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}
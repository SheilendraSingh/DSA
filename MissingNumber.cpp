#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr)
{
    int n = arr.size();
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++)
    {
        actualSum += arr[i];
    }
    return expectedSum - actualSum;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << missingNumber(arr);

    return 0;
}
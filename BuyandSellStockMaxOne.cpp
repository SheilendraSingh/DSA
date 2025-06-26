#include <bits/stdc++.h>
using namespace std;

int profit(vector<int> arr)
{

    int mini = arr[0];
    int maxi = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        int diff = arr[i] - mini;
        maxi = max(maxi, diff);
        mini = min(mini, arr[i]);
    }

    return maxi;
}

int main()
{

    int n;
    cout << "Enter the size of the Array: ";
    cin >> n;

    vector<int> arr(n);

    for (int &val : arr)
    {
        cin >> val;
    }

    cout << profit(arr);

    return 0;
}

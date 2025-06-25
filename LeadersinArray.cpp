#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] >= maxi)
        {
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    for (int &val : arr)
    {
        cin >> val;
    }

    vector<int> res = leaders(arr);

    for (int val : res)
    {
        cout << val << " ";
    }
    return 0;
}
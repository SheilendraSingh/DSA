#include <bits/stdc++.h>
using namespace std;

vector<int> arrayDuplicates(vector<int> &arr)
{
    unordered_map<int, int> freq;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }

    for (auto &val : freq)
    {
        if (val.second > 1)
        {
            ans.push_back(val.first);
        }
    }
    return ans;
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

    vector<int> res = arrayDuplicates(arr);

    cout << "[";
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
        if (i < res.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "]";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int countSum(vector<int> &arr, int target)
{
    int n = arr.size();
    int count = 0;

    unordered_map<int, vector<pair<int, int>>> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int remaining = target - (arr[i] + arr[j]);

            if (mp.find(remaining) != mp.end())
            {
                for (auto p : mp[remaining])
                {
                    int a = p.first;
                    int b = p.second;
                    if (b < i)
                    {
                        count++;
                    }
                }
            }
        }

        for (int j = 0; j < i; j++)
        {
            mp[arr[i] + arr[j]].push_back({j, i});
        }
    }

    return count;
}

int main()
{
    int n, k;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int &val : arr)
    {
        cin >> val;
    }

    cout << "Enter the target sum: ";
    cin >> k;

    int result = countSum(arr, k);
    cout << "Number of valid quadruples: " << result << endl;

    return 0;
}

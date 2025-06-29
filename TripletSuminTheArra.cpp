#include <bits/stdc++.h>
using namespace std;

bool threeSum(vector<int> arr, int target)
{

    int n = arr.size();

    // Your Code Here

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == target)
            {
                return true;
            }
            else if (sum < target)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }

    // Better

    // for (int i = 0; i < n; i++)
    // {
    //     unordered_set<int> st;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         int third = target - (arr[i] + arr[j]);
    //         if (st.find(third) != st.end())
    //         {
    //
    //             return 1;
    //         }
    //         st.insert(arr[j]);
    //     }
    // }
    // Brute force

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         for (int k = j + 1; k < n; k++)
    //         {
    //             int sum = arr[i] + arr[j] + arr[k];
    //             if (sum == target)
    //             {
    //
    //                 return 1;
    //             }
    //         }
    //     }
    // }
    return 0;
}

int main()
{
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements in the array: " << endl;
    vector<int> arr(n);
    for (int &val : arr)
    {
        cin >> val;
    }

    cout << "Enter the targeted sum: ";
    cin >> target;
    threeSum(arr, target);
    return 0;
}
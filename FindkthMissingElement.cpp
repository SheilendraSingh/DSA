#include <bits/stdc++.h>
using namespace std;
int findKthPositive(vector<int> &arr1, vector<int> arr2, int k)
{
    unordered_set<int> present(arr2.begin(), arr2.end());

    for (int i = 0; i < arr1.size(); i++)
    {
        if (present.find(arr1[i]) == present.end())
        {
            k--;
            if (k == 0)
                return arr1[i];
        }
    }

    return -1;
}

int main()
{

    int n, m, k;
    cout << "Enter the size of the array1: ";
    cin >> n;

    vector<int> arr1(n);
    cout << "Enter the Elments in the array2: ";

    for (int &val : arr1)
    {
        cin >> val;
    }

    cout << "Enter the Size of the array2: ";
    vector<int> arr2(m);
    cout << "Enter the Elments in the array2: ";

    for (int &val : arr2)
    {
        cin >> val;
    }
    cout << "Enter the target: ";
    cin >> k;

    cout << findKthPositive(arr1, arr2, k);

    return 0;
}
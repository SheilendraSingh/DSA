#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &arr)
{

    int n = arr.size();
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[index]);
            index++;
        }
    }
}

int main()
{

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements in the array: ";

    for (int &val : arr)
    {
        cin >> val;
    }

    moveZeroes(arr);

    for (int val : arr)
    {
        cout << val << " ";
    }
    return 0;
}
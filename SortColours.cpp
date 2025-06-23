#include <bits/stdc++.h>
using namespace std;

void sortColours(vector<int> &arr)
{
    int s = 0, m = 0, e = arr.size() - 1;

    while (m < e)
    {
        if (arr[m] == 0)
        {
            swap(arr[s], arr[m]);
            s++;
            m++;
        }

        if (arr[m] == 1)
        {
            m++;
        }

        if (arr[m] == 2)
        {
            swap(arr[m], arr[e]);
            e--;
        }
    }
}

int main()
{
    int n, a;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }

    sortColours(arr);

    for (int val : arr)
    {
        cout << val << " ";
    }
    return 0;
}
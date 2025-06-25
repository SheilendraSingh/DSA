#include <bits/stdc++.h>
using namespace std;

int findTheDuplicates(vector<int> arr)
{

    int slow = arr[0], fast = arr[0];

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    slow = arr[0];

    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}

int main()
{

    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << findTheDuplicates(arr);

    return 0;
}
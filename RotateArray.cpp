#include <bits./stdc++.h>
using namespace std;

void rotateArray(vector<vector<int>> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    // for 90 degree clock wise

    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }

    // for 90 degree anti-clock wise

    // reverse(arr.begin(), arr.end());
}

int main()
{
    int m, n;
    cout << "Enter the size of the array: ";
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));

    for (vector<int> &row : arr)
    {
        for (int &val : row)
        {
            cin >> val;
        }
    }

    rotateArray(arr);

    for (vector<int> row : arr)
    {
        for (int val : row)
        {
            cout << val;
        }
        cout << endl;
    }

    return 0;
}
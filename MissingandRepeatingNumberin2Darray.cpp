#include <bits/stdc++.h>
using namespace std;

vector<int> missRepeatNum(vector<vector<int>> &arr)
{

    long long n = arr.size() * arr[0].size();

    long long SN = (n * (n + 1)) / 2, S2N = (n * (n + 1) * ((2 * n) + 1)) / 6, S = 0, S2 = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            S += (long long)arr[i][j];
            S2 += (long long)arr[i][j] * (long long)arr[i][j];
        }
    }

    long long miss = (((S2 - S2N) / (S - SN)) + (S - SN)) / 2, repeat = ((S2 - S2N) / (S - SN)) - miss;
    return {(int)miss, (int)repeat};
}

int main()
{

    int rows, cols;
    cout << "Enter Rows and Coloums: ";
    cin >> rows >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> res = missRepeatNum(arr);

    cout << "[" << res[0] << ", " << res[1] << "]";

    return 0;
}
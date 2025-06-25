#include <bits/stdc++.h>
using namespace std;

vector<int> missRepeatNum(vector<int> &arr)
{

    long long n = arr.size();

    long long SN = (n * (n + 1)) / 2, S2N = (n * (n + 1) * ((2 * n) + 1)) / 6, S = 0, S2 = 0;

    for (int i = 0; i < n; i++)
    {
        S += (long long)arr[i];

        S2 += (long long)arr[i] * (long long)arr[i];
    }

    long long miss = (((S2 - S2N) / (S - SN)) + (S - SN)) / 2, repeat = ((S2 - S2N) / (S - SN)) - miss;
    return {(int)miss, (int)repeat};
}

int main()
{

    int n;
    cout << "Enter the size of the Array: ";
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    vector<int> res = missRepeatNum(arr);

    cout << "[" << res[0] << ", " << res[1] << "]";

    return 0;
}
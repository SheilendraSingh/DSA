#include <bits/stdc++.h>
using namespace std;

bool can(vector<int> &bloomDay, int m, int k, int mid)
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] <= mid)
        {
            count++;
        }
        else
        {
            sum += (count / k);
            count = 0;
        }
    }
    sum += (count / k);
    return (sum >= m);
}

int minDaysBloom(int m, int k, vector<int> &bloomDay)
{
    if (1LL * m * k > bloomDay.size())
        return -1;

    int low = 1, high = *max_element(bloomDay.begin(), bloomDay.end());

    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (can(bloomDay, m, k, mid))
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    // Example input
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3; // number of bouquets
    int k = 1; // flowers per bouquet

    int result = minDaysBloom(m, k, bloomDay);
    cout << "Minimum number of days: " << result << endl;

    return 0;
}

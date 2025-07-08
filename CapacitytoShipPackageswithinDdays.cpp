#include <bits/stdc++.h>
using namespace std;

bool canShip(vector<int> &weights, int D, int capacity)
{
    int current = 0, days = 1;
    for (int w : weights)
    {
        if (current + w > capacity)
        {
            days++;
            current = 0;
        }
        current += w;
    }
    return days <= D;
}

int shipWithinDays(vector<int> &weights, int D)
{
    int left = *max_element(weights.begin(), weights.end());
    int right = accumulate(weights.begin(), weights.end(), 0);
    int ans = right;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (canShip(weights, D, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int D = 5;
    cout << "Minimum capacity: " << shipWithinDays(weights, D) << endl;
    return 0;
}

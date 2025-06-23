#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> intervals)
{
    vector<vector<int>> merged;
    if (intervals.empty())
    {
        return merged;
    }

    sort(intervals.begin(), intervals.end());

    merged.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++)
    {
        if (merged.back()[1] >= intervals[i][0])
        {
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        }
        else
        {
            merged.push_back(intervals[i]);
        }
    }
    return merged;
}

int main()
{
    int n;
    vector<vector<int>> intervals;

    cout << "Enter the size of array: ";

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        intervals.push_back({a, b});
    }

    vector<vector<int>> merged = mergeIntervals(intervals);

    cout << "{";
    for (int i = 0; i < merged.size(); i++)
    {
        cout << "{" << merged[i][0] << ", " << merged[i][1] << "}";
        if (i < merged.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "}";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int longestConsecutiveSubsequence(vector<int> arr)
{

    int n = arr.size();
    if (n == 0)
        return 0;

    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    for (auto &it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int count = 1, x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                count++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}

int main()
{

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    for (int &val : arr)
    {
        cin >> val;
    }

    cout << longestConsecutiveSubsequence(arr);

    return 0;
}
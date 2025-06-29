#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> &arr)
{
    int n = arr.size();
    set<vector<int>> st;
    map<int, int> hashset;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int third = -(arr[i] + arr[j]);
            if (hashset.count(third) == 1 && i != j && j != hashset[third] && hashset[third] != i)
            {
                vector<int> temp = {i, j, hashset[third]};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
        }
        hashset[arr[i]] = i;
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int &val : arr)
    {
        cin >> val;
    }

    vector<vector<int>> triplets = findTriplets(arr);

    if (triplets.empty())
    {
        cout << "No triplets found." << endl;
    }
    else
    {
        cout << "Triplets (as indices):\n";
        for (auto t : triplets)
        {
            cout << "[" << t[0] << ", " << t[1] << ", " << t[2] << "] --> ("
                 << arr[t[0]] << ", " << arr[t[1]] << ", " << arr[t[2]] << ")" << endl;
        }
    }

    return 0;
}

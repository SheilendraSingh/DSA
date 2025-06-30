#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &arr, int k)
{

    unordered_map<int, int> prefixSumfreq;
    int count = 0, sum = 0;
    prefixSumfreq[0] = 1;

    for (int val : arr)
    {
        sum += val;
        if (prefixSumfreq.find(sum - k) != prefixSumfreq.end())
        {

            count += prefixSumfreq[sum - k];
        }
        prefixSumfreq[sum]++;
    }
    return count;
}

int main()
{

    int n, k;
    cout << "Enter teh size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the value in the array: ";
    for (int &val : arr)
    {
        cin >> val;
    }
    cout << "Enter the targeted sum: ";
    cin >> k;
    cout << subarraySum(arr, k);

    return 0;
}
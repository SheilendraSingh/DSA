#include <bits/stdc++.h>
using namespace std;
bool subArrayExists(vector<int> &arr)
{
    // Your code here

    unordered_set<int> st;
    int sum = 0;
    st.insert(0);
    for (int val : arr)
    {
        sum += val;
        if (st.count(sum))
            return true;
        st.insert(sum);
    }
    // int n = arr.size();
    // unordered_map<int, int>mpp;
    // mpp[0] = 1;
    // int count=0;
    // int sum = 0;
    // for(int i = 0; i<n ; i++){

    //     sum += arr[i];
    //     if(mpp.find(sum) != mpp.end()){
    //         count += mpp[sum];
    //     }
    //     mpp[sum]++;
    // }
    // if(count>0){
    //     return true;
    // }
    return false;
}
int main()
{

    int n;
    cout << "Enter teh size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the value in the array: ";
    for (int &val : arr)
    {
        cin >> val;
    }

    if (subArrayExists(arr))
        cout << "true";
    else
        cout << "false";

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> &nums)
{
    int left = 0, right = nums.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        // If middle element is greater than the rightmost, min must be right
        if (nums[mid] > nums[right])
            left = mid + 1;
        else
            right = mid;
    }

    return nums[left]; // or nums[right], since left == right
}

// 🧪 Test the solution locally
int main()
{

    vector<int> test1 = {3, 4, 5, 1, 2};
    vector<int> test2 = {4, 5, 6, 7, 0, 1, 2};
    vector<int> test3 = {11, 13, 15, 17};
    vector<int> test4 = {1}; // edge case

    cout << "Minimum in test1: " << findMin(test1) << endl; // Output: 1
    cout << "Minimum in test2: " << findMin(test2) << endl; // Output: 0
    cout << "Minimum in test3: " << findMin(test3) << endl; // Output: 11
    cout << "Minimum in test4: " << findMin(test4) << endl; // Output: 1

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

vector<int> ansRow(int n)
{
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for (int i = 1; i < n; i++)
    {
        ans = ans * (n - i) / (i);
        ansRow.push_back(ans);
    }

    return ansRow;
}

vector<vector<int>> generatePascal(int n)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= n; i++)
    {
        ans.push_back(ansRow(i));
    }
    return ans;
}

int main()
{
    vector<vector<int>> pascalTriangle;
    int n;
    cout << "Enter the value: ";
    cin >> n;

    pascalTriangle = generatePascal(n);
    for (const auto &row : pascalTriangle)
    {
        for (int val : row)
        {
            cout << val;
        }
        cout << endl;
    }
    return 0;
}
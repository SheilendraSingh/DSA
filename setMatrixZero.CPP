#include <bits/stdc++.h>
#include <vector>
using namespace std;
void printMatrix(vector<vector<int>> &matrix)
{
    for (const auto &row : matrix)
    {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }
}
void setZeroes(vector<vector<int>> &matrix)
{

    int n = matrix.size(), m = matrix[0].size();
    bool firstRow = false, firstCol = false;

    for (int i = 0; i < n; i++)
    {
        if (matrix[i][0] == 0)
        {
            firstCol = true;
        }
    }

    for (int j = 0; j < m; j++)
    {
        if (matrix[0][j] == 0)
        {
            firstRow = true;
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    if (firstRow)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[0][j] = 0;
        }
    }

    if (firstCol)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    cout << "Original matrix:\n";
    printMatrix(matrix);

    setZeroes(matrix);

    cout << "\nMatrix after setting zeroes:\n";
    printMatrix(matrix);

    return 0;
}
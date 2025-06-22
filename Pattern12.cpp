/*
    1             1
    1 2         2 1
    1 2 3     3 2 1
    1 2 3 4 4 3 2 1
 */

#include <bits/stdc++.h>
using namespace std;

void printPattern(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        for (int j = num - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = num - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = i; j >= 0; j--)
        {

            cout << j + 1;
        }

        cout << endl;
    }
}

int main()
{
    int num;
    cin >> num;

    printPattern(num);
    return 0;
}
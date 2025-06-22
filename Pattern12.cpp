/*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
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
        for (int j = i + 1; j > 0; j--)
        {

            cout << j;
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
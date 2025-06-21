/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */

#include <bits/stdc++.h>
using namespace std;

void printPattern(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = num; j > i; j--)
        {
            cout << num - j + 1 << " ";
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
/*
 *
 * * *
 * * * * *
 * * * * * * *
 * * * * * * * * *
 * * * * * * * * *
 * * * * * * *
 * * * * *
 * * *
 *
 */

#include <bits/stdc++.h>
using namespace std;

void printPattern(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = num; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = num; j > i; j--)
        {
            cout << "*";
        }
        for (int j = num; j > i + 1; j--)
        {
            cout << "*";
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
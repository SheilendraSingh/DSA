/*
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5
 */

#include <bits/stdc++.h>
using namespace std;

void printPattern(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
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
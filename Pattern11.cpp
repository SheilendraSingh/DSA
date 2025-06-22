/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
 */

#include <bits/stdc++.h>
using namespace std;

void printPattern(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 != 0)
                {
                    cout << "1 ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    cout << "1 ";
                }
                else
                {
                    cout << "0 ";
                }
            }
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
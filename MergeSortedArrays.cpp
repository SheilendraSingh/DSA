#include <bits/stdc++.h>
using namespace std;

void mergeSorted(vector<int> &a, vector<int> &b, int m, int n)
{

    // gape methode

    int gape = ((m + n) / 2) + ((m + n) % 2);

    while (gape > 0)
    {
        int i = 0;
        int j = i + gape;

        while (j < (m + n))
        {
            if (i < m && j >= m)
            {
                if (a[i] > b[j - m])
                {
                    swap(a[i], b[j - m]);
                }
            }
            else if (i >= m)
            {
                if (b[i - m] > b[j - m])
                {
                    swap(b[i - m], b[j - m]);
                }
            }
            else
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                }
            }
            i++;
            j++;
        }
        if (gape == 1)
            break;
        gape = (gape / 2) + (gape % 2);
    }

    // Optimized
    // int idx = m + n - 1, i = m - 1, j = n - 1;
    // while (i >= 0 && j >= 0)
    // {
    //     if (A[i] >= B[j])
    //     {
    //         A[idx] = A[i];
    //         idx--;
    //         i--;
    //     }
    //     else
    //     {
    //         A[idx] = B[j];
    //         idx--;
    //         j--;
    //     }
    // }
    // while (j >= 0)
    // {
    //     A[idx] = B[j];
    //     idx--;
    //     j--;
    // }

    // // Optimal 1

    // int Ai = m - 1;
    // int Bi = 0;

    // while (Ai < m && Bi < n)
    // {
    //     if (A[Ai] > B[Bi])
    //     {
    //         swap(A[Ai], B[Bi]);
    //         Ai--;
    //         Bi++;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // sort(A.begin(), A.end());
    // sort(B.begin(), B.end());

    // Brute Force

    // int Ai = 0;
    // int Bi = 0;
    // vector<int> C;
    // int Ci = 0;

    // while (Ai < m && Bi < n)
    // {
    //     if (A[Ai] <= B[Bi])
    //     {
    //         C.push_back(A[Ai]);
    //         Ai++;
    //         Ci++;
    //     }
    //     else
    //     {
    //         C.push_back(B[Bi]);
    //         Bi++;
    //         Ci++;
    //     }
    // }

    // while (Ai < m)
    // {
    //     C.push_back(A[Ai]);
    //     Ai++;
    //     Ci++;
    // }
    // while (Bi < n)
    // {
    //     C.push_back(B[Bi]);
    //     Bi++;
    //     Ci++;
    // }

    // A.clear();
    // B.clear();

    // for (int i = 0; i < n + m; i++)
    // {
    //     if (i < m)
    //     {
    //         A.push_back(C[i]);
    //     }
    //     else
    //     {
    //         B.push_back(C[i]);
    //     }
    // }
}
int main()
{

    int m, n;
    vector<int> A, B;
    cout << "Enter size of the first array: ";
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        A.push_back(a);
    }

    cout << "Enter size of the second array: ";
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        int b;
        cin >> b;
        B.push_back(b);
    }

    cout << "Arrays:\n";

    cout << "{";
    for (int i = 0; i < m; i++)
    {
        cout << A[i];
        if (i < m - 1)
            cout << ", ";
    }
    cout << "}" << endl;

    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << B[i];
        if (i < n - 1)
            cout << ", ";
    }
    cout << "}" << endl;

    mergeSorted(A, B, m, n);

    cout << "Sorted arrays:\n";

    cout << endl
         << "{";
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i];
        if (i < A.size() - 1)
            cout << ", ";
    }
    cout << "}" << endl;

    cout << "{";
    for (int i = 0; i < B.size(); i++)
    {
        cout << B[i];
        if (i < B.size() - 1)
            cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

pair<vector<int>, vector<int>> mergeSorted(vector<int> A, vector<int> B, int m, int n)
{

    // Brute Force

    int Ai = 0;
    int Bi = 0;
    vector<int> C;
    int Ci = 0;

    while (Ai < m && Bi < n)
    {
        if (A[Ai] <= B[Bi])
        {
            C.push_back(A[Ai]);
            Ai++;
            Ci++;
        }
        else
        {
            C.push_back(B[Bi]);
            Bi++;
            Ci++;
        }
    }

    while (Ai < m)
    {
        C.push_back(A[Ai]);
        Ai++;
        Ci++;
    }
    while (Bi < n)
    {
        C.push_back(B[Bi]);
        Bi++;
        Ci++;
    }

    A.clear();
    B.clear();

    for (int i = 0; i < n + m; i++)
    {
        if (i < m)
        {
            A.push_back(C[i]);
        }
        else
        {
            B.push_back(C[i]);
        }
    }

    return {A, B};
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

    pair<vector<int>, vector<int>> C = mergeSorted(A, B, m, n);

    cout << "Sorted arrays:\n";

    cout << endl
         << "{";
    for (int i = 0; i < C.first.size(); i++)
    {
        cout << C.first[i];
        if (i < C.first.size() - 1)
            cout << ", ";
    }
    cout << "}" << endl;

    cout << "{";
    for (int i = 0; i < C.second.size(); i++)
    {
        cout << C.second[i];
        if (i < C.second.size() - 1)
            cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
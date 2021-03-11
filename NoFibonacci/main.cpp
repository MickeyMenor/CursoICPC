#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int a = 0, b = 1, c = 1, i = 0;

    while (i < N)
    {
        a = b;
        b = c;
        c = a + b;

        for (i = a + 1; i < b && i < N; i++)
            cout << i << " ";

    }

    cout << endl;
}
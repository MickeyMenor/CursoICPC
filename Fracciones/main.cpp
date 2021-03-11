#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int res = n / m;
    int mod = n % m;

    cout << res << " ";

    if (mod != 0)
        cout << mod << "/" << m;

    cout << endl;
}
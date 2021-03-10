#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> indices;

    for (int i = 0; i < n; i++)
    {
        int numero;
        cin >> numero;

        if (numero % 3 == 0)
            indices.emplace_back(i + 1);
    }

    if (indices.size() == 0)
    {
        cout << "No hay triples." << endl;
        return 0;
    }

    cout << indices.size() << endl;

    for (auto &indice : indices)
        cout << indice << " ";
    
    cout << endl;
}
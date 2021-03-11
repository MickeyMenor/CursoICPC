#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d, w;
    cin >> d >> w;

    unordered_map<int, int> diccionario;
    diccionario.reserve(d + 1);

    for (int i = 0; i < d; i++)
    {
        int palabra, traduccion;
        cin >> palabra >> traduccion;
        diccionario[palabra] = traduccion;
    }
  
    vector<int> palabras;

    for (int i = 0; i < w; i++)
    {
        int palabra;
        cin >> palabra;
        palabras.emplace_back(palabra);
    }
    
    for (auto &palabra : palabras)
    {
        if (diccionario.find(palabra) != diccionario.end())
            cout << diccionario[palabra];
        else
            cout << "C?";
        
        cout << endl;
    }
}
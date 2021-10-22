#include<iostream>
using namespace std;

void citire(int &n, int &x, int v[])
{
    cout << "n="; cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    cout << "x="; cin >> x;
    cout << endl;
}
int nr_aparitii(int x, int v[], int pozitie, int contor) {
    if (pozitie > 0) {
        if (v[pozitie] == x) return nr_aparitii(x, v, pozitie - 1, contor + 1);
        else return nr_aparitii(x, v, pozitie - 1, contor);
    }
    else return contor;
}
int main() {
    int n, x, v[100];
    citire(n, x, v);
    int contor = 0;
    cout << nr_aparitii(x, v, n, contor);
    return 0;
}
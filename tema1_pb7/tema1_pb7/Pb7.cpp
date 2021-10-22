#include <iostream>
using namespace std;


void citimImpreuna(int(vect)[], int& lung)
{
    cout << "lungimea polinomului este: ";
    cin >> lung;
    cout << "coeficientii polinomului sunt: ";
    for (int i = 0; i < lung; i++)
        cin >> vect[i];
}

int max(int m, int n) 
{ return (m > n) ? m : n; }



int* adauga(int A[], int B[], int m, int n)
{
    int marime = max(m, n);
    int* suma = new int[marime];

    for (int i = 0; i < m; i++)
        suma[i] = A[i];

    for (int i = 0; i < n; i++)
        suma[i] += B[i];

    return suma;
}

int* inmultire(int A[], int B[], int m, int n)
{
    int* produs = new int[m + n - 1];

    for (int i = 0; i < m + n - 1; i++)
        produs[i] = 0;


    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
            produs[i + j] += A[i] * B[j];
    }

    return produs;
}

void afisarePolinom(int polinom[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << polinom[i];
        if (i != 0)
            cout << "x^" << i;
        if (i != n - 1)
            cout << " + ";
    }
}

int main()
{
    int A[50], B[50], m, n;
    citimImpreuna(A, m);
    citimImpreuna(B, n);
    cout << "\n";
    cout << "Primul polinom este  \n";
    afisarePolinom(A, m);
    cout << "\n";
    cout << "\nAl  doilea polinom este \n";
    afisarePolinom(B, n);
    cout << "\n";
    int* suma = adauga(A, B, m, n);
    int marime = max(m, n);

    int* produs = inmultire(A, B, m, n);

    cout << "\n";
    cout << "\nSuma polinoamelor este \n";
    afisarePolinom(suma ,marime);

    cout << "\n";
    cout << "\nProdusul polinoamelor este \n";
    afisarePolinom(produs, m + n - 1);
    cout << "\n";
    return 0;
}
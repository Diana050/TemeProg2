
#include<iostream>
#include <fstream>
using namespace std;

int elevi[50][50], n;
ifstream f("elevi.in");
void citire()
{
    f >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            f >> elevi[i][j];
        }
    }
}

bool agreatiReciproc(int x, int y)
{
    if (x == 1 && y == 1) return true;
    else return false;
}

void nuAgreaza(int elevi[][50], int n)
{
    bool nimeni = true;
    for (int i = 1; i <= n; i++)
    {
        int nr1 = 0;
        for (int j = 1; j <= n; j++)
        {
            if (elevi[i][j] == 1) nr1++;
        }
        if (nr1 == 1)
        {
            cout << i << " ";
            nimeni = false;
        }
    }
    if (nimeni) cout << "Nu exista elevi care nu agreeaza pe nimeni";
    else cout << "sunt elevii care nu agreeaza pe nimeni";

}

void nuSuntAgreati(int elevi[][50], int n)
{
    bool nimeni = true;
    for (int i = 1; i <= n; i++)
    {
        int nr1 = 0;
        for (int j = 1; j <= n; j++)
        {
            if (elevi[j][i] == 1) nr1++;
        }
        if (nr1 == 1)
        {
            cout << i << " ";
            nimeni = false;
        }
    }
    if (nimeni) cout << "Nu exista elevi care nu sunt agreeati de nimeni";
    else cout << "sunt elevii care nu sunt agreeati de nimeni";
}

void populariate(int elevi[][50], int n)
{
    int popMat[2][50];
    for (int i = 1; i <= n; i++)
    {
        int fani = 0;
        popMat[0][i] = i;
        for (int j = 1; j <= n; j++)
        {
            if (i != j) fani += elevi[j][i];
        }
        popMat[1][i] = fani;
    }


    bool sortat;
    for (int i = 1; i <= n; i++)
    {
        sortat = true;
        for (int j = 1; j <= n - 1; j++)
        {
            if (popMat[1][j] <= popMat[1][j + 1])
            {
                swap(popMat[1][j], popMat[1][j + 1]);
                swap(popMat[0][j], popMat[0][j + 1]);
                sortat = false;
            }
        }
        if (sortat) break;
    }

    cout << "Cei mai populari elevi in ordine descrescatoare: ";

    for (int i = 1; i <= n; i++)
    {
        cout << popMat[0][i] << " cu " << popMat[1][i] << " admirator(i) ";
    }
}

void careSeAgreeazaReciproc(int a[][50], int n)
{
    cout << "Elevii care se agreeaza reciproc sunt: ";
    bool nimeni = true;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (agreatiReciproc(elevi[i][j], elevi[j][i]))
            {
                cout << i << " si " << j << "  ";
                nimeni = false;
            }
        }
    }
    if (nimeni) cout << "nu exista";
}
int main()
{
    citire();
    careSeAgreeazaReciproc(elevi, n);
    cout << endl;
    nuAgreaza(elevi, n);
    cout << endl;
    nuSuntAgreati(elevi, n);
    cout << endl;
    populariate(elevi, n);
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

void citire(char sir[30])
{
    cin >> sir;
}

bool estePalindrom(char sir[30])
{
    int i = 0, j;
    j = strlen(sir) - 1;
    bool verif = true;

    while (i < j)
    {
        if (sir[i] != sir[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return verif;
}

void afisare(char sir[])
{
    if (estePalindrom(sir)) cout << "DA";
    else cout << "NU";
}

int main()
{
    int i = 0, j;

    bool verif = true;
    char sir[30];
    citire(sir);
    afisare(sir);

    

    return 0;
}
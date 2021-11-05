#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
void citire(int matr[][20], int& n, int &m)
{
	f >> n>>m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			f >> matr[i][j];
		}
	}
}

bool prim(int nr)
{
	if (nr < 2)
		return false;
	if (nr == 2) return true;
	for (int divizor = 2; divizor < nr - 1; divizor++)
	{
		if (nr % divizor == 0)
			return false;
	}
	return true;
}

int nrVecini(int matr[][20], int n, int m)
{
	int numar = 0;
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 1; j < m - 1; j++)
		{
			if (prim(matr[i - 1][j - 1]) && prim(matr[i - 1][j]) && prim(matr[i - 1][j + 1]) && prim(matr[i][j - 1]) && prim(matr[i][j + 1]) && prim(matr[i + 1][j - 1]) && prim(matr[i + 1][j]) && prim(matr[i + 1][j + 1]))
			{
				numar++;
			}
		}
	}
	return numar;
}

int main()
{
	int matr[20][20], n, m;
	citire(matr, n, m);
	cout << nrVecini(matr, n, m);
	
}

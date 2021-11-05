#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
int imax = INT_MAX, jmax = INT_MAX, imin = INT_MIN, jmin = INT_MIN;
void citire(int matr[][20], int& n, int& m)
{
	f >> n;
	f >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			f >> matr[i][j];
		}
	}
}

bool unic(int matr[][20], int n, int m, int xc, int yc)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i != xc && j != yc && matr[i][j] == matr[xc][yc]) return false;
		}
	}
	return true;
}

bool verifDistincte(int matr[][20], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!unic(matr, n, m, i, j)) return false;
		}
	}
	return true;
}


void elemMax(int matr[][20], int n, int m)
{
	int maxim = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matr[i][j] > maxim)
			{
				maxim = matr[i][j];
				imax = i;
				jmax = j;
			}
		}
	}


}


void elemMin(int matr[][20], int n, int m )
{
	int minim = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matr[i][j] < minim)
			{
				minim = matr[i][j];
				imin = i;
				jmin = j;
			}
		}
	}

	
}

void afisare(int matr[][20], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matr[i][j] << " ";
		}
		cout << endl;
	}
}

void schimbare(int matr[][20], int n, int m)
{
	elemMin(matr, n, m);
	elemMax(matr, n, m);
	
	if (imin != imax)
	{
		for (int j = 0; j < m; j++)
		{

			swap(matr[imin][j], matr[imax][j]);
		}
	}
	else
	{
		for (int j = 0; j < m; j++)
		{
			swap(matr[imin][jmin], matr[imax][jmax]);
		}
	}

	afisare(matr, n, m);
}


int main()
{
	int matr[20][20], n, m;
	citire(matr, n, m);
	if (verifDistincte(matr, n, m) == false)
		cout << "elementele matricei nu usnt distincte";
	schimbare(matr, n, m);
	
}

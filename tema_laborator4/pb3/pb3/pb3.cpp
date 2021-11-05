#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
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

void permuatare(int matr[][20], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m-1; j++)
		{
			swap(matr[i][j], matr[i][j + 1]);
			
		}
	}
	afisare(matr, n, m);
}



int main()
{
	int matr[20][20], n, m;
	citire(matr, n, m);
	permuatare(matr, n, m);
	
}

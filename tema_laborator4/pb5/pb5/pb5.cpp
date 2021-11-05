#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
void citire(int matr[][20], int& n)
{
	f >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <n ; j++)
		{
			f >> matr[i][j];
		}
	}
}

void afisare(int matr[][20], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<<matr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void simetric(int matr[][20], int n)
{
	int  b = n-1;
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < n; j++)
		{
			if (i < n - j)
			{
				
				swap(matr[i][j],matr[n-1-j][b]);
			}
		}
		b--;
		
	}

	afisare(matr, n);
}


int main()
{
	int matr[20][20], n;
	citire(matr, n);
	simetric(matr, n);
}

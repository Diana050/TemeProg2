#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
void citire(int matr[][20], int& n)
{
	f >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			f >> matr[i][j];
		}
	}
}

void spirala(int matr[][20], int n)
{
	for (int i = 1; i <= n / 2; i++) { 
		for (int j = i; j <= n - i; ++j) 
			cout << matr[j][i] << " ";
		for (int j = i; j <= n - i; ++j) 
			cout << matr[n - i + 1][j] << " ";
		for (int j = n - i + 1; j >= i + 1; --j) 
			cout << matr[j][n - i + 1] << " ";
		for (int j = n - i + 1; j >= i + 1; --j) 
			cout << matr[i][j] << " ";
	}
	if (n % 2 == 1) 
		cout << matr[n / 2 + 1][n / 2 + 1];
}



int main()
{
	int matr[20][20], n;
	citire(matr, n);
	spirala(matr, n);
	
}

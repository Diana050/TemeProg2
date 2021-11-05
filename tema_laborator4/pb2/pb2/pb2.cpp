#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.txt");
void citire(int matr[][20], int& n)
{
	f >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			f >> matr[i][j];
		}
	}
}

void rotire(int matr[][20], int n)
{
	
	for (int i = 0; i < n; i++)
	{
		int a =1 ;
		for (int j = 0; j < n; j++)
		{
			cout << matr[n -a][i] << " ";
			a++;
		}
		cout << endl;
	}
}

int main()
{
	int matr[20][20], n;
	citire(matr, n);
	rotire(matr,n);
	

}

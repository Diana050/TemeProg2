#include <iostream>
#include <fstream>
using namespace std;
ifstream f("in.text");
ofstream o("out.txt");
void citire(int v[], int& n)
{
	f >> n;
	for (int i = 0; i < n; i++)
	{
		f >> v[i];
	}
}

int suma(int v[], int n)
{
	int suma = 0;
	for (int i = 0; i < n; i++)
	{
		suma += v[i];
	}
	return suma;
}

int medie(int v[], int &n)
{
	int med = 0;
	med = suma(v, n) / n;
	return med;
}

void afisare(int v[], int n)
{
	o << medie(v,n);
}
int main()
{
	
	int v[100], n;
	citire(v, n);
	afisare(v, n);
	

}
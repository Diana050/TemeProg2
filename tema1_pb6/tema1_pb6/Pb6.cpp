#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
ifstream f("text.txt");
void citire(char cuv[], char prop[40])
{
	 f >> cuv;
	f.ignore();
	f.getline(prop, 39);
}

bool prelucrare(char cuv[], char prop[])
{
	int poz = -1;
	bool verif, veriftotal = true;
	char tranzit;

	for (int i = 0; i < strlen(cuv) - 1; i++)
	{
		for (int j = poz + 1; j < strlen(prop) - 1; j++)
		{
			verif = false;
			if (cuv[i] == prop[j])
			{
				poz = j;
				verif = true;
				j = strlen(prop) + 1;
			}
		}
		if (verif == false)
		{
			veriftotal = false;
		}

	}
	return veriftotal;
}

void afisare(char cuv[], char prop[])
{
	if (prelucrare(cuv,prop))
		cout << "da";
	else
		cout << "nu";
}

int main()
{
	char cuv[10];
	char prop[40];
	citire(cuv, prop);
	afisare(cuv, prop);
	
	return 0;

}
#include<iostream>
#include<math.h>
using namespace std;

void citire(int &lungime)
{
	cin >> lungime;
}
int verificareTriungi(int a, int b, int c)
{
	bool verif;
	if (a + b > c || a + c > b || b + c > a)
		 verif = true;
	else verif = false;
	return verif;
}

int perimetruTriunghi(int a, int b, int c) {
	int perimetru = 0;
	if (verificareTriungi(a, b, c))
		 perimetru = a + b + c;
	return perimetru;
}

int arieTriunghi(int a, int b, int c)
{
	double arie = 0;
	if (verificareTriungi(a, b, c)) {
		int semiperimetru = perimetruTriunghi(a, b, c) / 2;
		 arie = sqrt(semiperimetru * (semiperimetru - a) * (semiperimetru - b) * (semiperimetru - c));
	}
		return arie;
}

int main()
{
	int a, b, c;
	cout << "a=";
	citire(a);
	cout << "b=";
	citire(b);
	cout << "c=";
	citire(c);
	if (verificareTriungi(a, b, c) == false)
		cout << "numerele introduse nu alcatuiesc laturile unui triunghi";
	cout << "perimetrul triunghiului este: " << perimetruTriunghi(a,b,c) << endl;
	cout << "aria triunghiului este: " << arieTriunghi(a,b,c);

	
	return 0;
}
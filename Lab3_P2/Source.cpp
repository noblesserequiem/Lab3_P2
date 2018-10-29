#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

class Mamifer {
	char nume[30];
	int durata;
public:
	Mamifer(char *n, int d)
	{
		strcpy_s(nume, sizeof(n)+1, n);
		durata = d;
	}
	void afis_mam() 
	{
		cout << "Nume: " << nume << endl;
		cout << "Durata Viata?:" << durata << endl;
	}
};
class Cangur :public Mamifer {
	int salt_max;
	char gen[10];
public:
	Cangur(char *n,int d,int s_m, char gn[30]):Mamifer(n, d)
	{
		salt_max = s_m;
		strcpy_s(gen, sizeof(gn)+1, gn);
	}

	void afis_cang()
	{
		cout << "Salt Max: "; cout << salt_max;
		cout << "Gen:"; cout << gen;
	}

};
class Urs :public Mamifer {
	int greutate;
	char partener[10];
public:
	Urs(char *n,int d,int g, char *par):Mamifer(n,d)
	{
		greutate = g;
		strcpy_s(partener, sizeof(par)+1, par);

	}
	void afis_urs() 
	{
		cout << "Greutate:" << greutate << endl;
		cout << "Partener" << partener<<endl;
	}
};
int main()
{
	Urs urs1((char*)"Mirc", 10, 100, (char*)"DA");
	Cangur c1((char*)"Bler",10,40,(char*)"Fem");
	urs1.afis_mam();
	urs1.afis_urs();
	c1.afis_mam();
	c1.afis_cang();
	_getch();
	return 0;
}
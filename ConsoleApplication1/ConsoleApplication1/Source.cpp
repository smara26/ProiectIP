#include<iostream>
#include<conio.h>
using namespace std;

int mainmenu();
double mtocm();//transforma m in cm
double mtomm();//transforma m in mm
double mtokm();//transforma m in km
double cmtom();//transforma cm in m
double mmtom();//transforma mm in m
double kmtom();//transforma km in m
double mmtocm();//transforma mm in cm
double cmtomm();//transforma cm in mm
double m2toha();//transforma m2 in ha
double m2toa();//transforma m2 in a
double hatom2();//transforma ha in m2
double atom2();//transforma a in m2
double atoha();//transforma a in ha
double hatoa();//transforma ha in a
double m3tol();//transforma m3 in l
double ltom3();//transforma l in m3
double cm3tom3();//transforma cm3 in m3
double m3tocm3();//transforma m3 in cm3
double ltoml();//transforma l in ml
double mltol();//transforma ml in l
double htomin();//transforma h in min
double htosec();//transforma h in sec
double mintosec();//transforma min in sec
double ctof();//transforma c in f
double ftoc();//transforma f in c
double gtokg();//transforma g in kg
double gtomg();//tranfsorma g in mg
double kgtog();//transforma kg in g
double mgtog();//transforma mg in g
double jtokj();//transforma j in kj
double caltoj();//transforma j in cal
double bartopsi();//transforma bar in psi
double psitobar();//transforma psi in bar
double gcm3tokgm3();//transforma g/cm3 in kg/m3
double kgm3togcm3();//transforma kg/m3 in g/cm3

int lungime();//selecteaza daca doresti transformari 
int arie();//selecteaza daca doresti transformari
int volum();//selecteaza daca doresti transformari
int timp();//selecteaza daca doresti transformari
int temperatura();//selecteaza daca doresti transformari
int masa();//selecteaza daca doresti transformari
int energie();//selecteaza daca doresti transformari
int presiune();//selecteaza daca doresti transformari
int densitate();//selecteaza daca doresti transformari

int main()
{

	cout << "\t\t\t CONVERTOR PENTRU DIFERITE UNITATI DE MASURA\n";
	cout << "\n";
	cout << "\n";
	mainmenu();

	return 0;
}


int mainmenu()
{
	char rubrica;
	cout << "\t\t\t Pentru LUNGIME scrieti L\n";
	cout << "\t\t\t Pentru ARIE scrieti A\n";
	cout << "\t\t\t Pentru VOLUM scrieti V\n";
	cout << "\t\t\t Pentru TIMP scrieti T\n";
	cout << "\t\t\t Pentru TEMPERATURA scrieti G\n";
	cout << "\t\t\t Pentru MASA scrieti M\n";
	cout << "\t\t\t Pentru ENERGIE scrieti E\n";
	cout << "\t\t\t Pentru PRESIUNE scrieti P\n";
	cout << "\t\t\t Pentru DENSITATE scrieti D\n";
	cout << "\n\n";
	cin >> rubrica;
	cout << "\n\n";
	if (rubrica == 'L' || rubrica == 'l')
		lungime();
	if (rubrica == 'A' || rubrica == 'a')
		arie();
	if (rubrica == 'V' || rubrica == 'v')
		volum();
	if (rubrica == 'T' || rubrica == 't')
		timp();
	if (rubrica == 'G' || rubrica == 'g')
		temperatura();
	if (rubrica == 'M' || rubrica == 'm')
		masa();
	if (rubrica == 'E' || rubrica == 'e')
		energie();
	if (rubrica == 'P' || rubrica == 'p')
		presiune();
	if (rubrica == 'D' || rubrica == 'd')
		densitate();

	return 0;

}
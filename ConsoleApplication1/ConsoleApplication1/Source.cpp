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

int lungime()
{
	int optiune;
	cout << "Ati ales conversiile pentru lungime." << endl;
	cout << "Scrieti 1 daca doriti sa convertiti metri in centimetri." << endl;
	cout << "Scrieti 2 daca doriti sa convertiti metri in milimetri. " << endl;
	cout << "Scrieti 3 daca doriti sa convertiti metri in kilometri. " << endl;
	cout << "Scrieti 4 daca doriti sa convertiti centimetri in metri. " << endl;
	cout << "Scrieti 5 daca doriti sa convertiti milimetri in metri. " << endl;
	cout << "Scrieti 6 daca doriti sa convertiti kilometri in metri. " << endl;
	cout << "Scrieti 7 daca doriti sa convertiti milimetri in centimetri. " << endl;
	cout << "Scrieti 8 daca doriti sa convertiti centimetri in milimetri. " << endl;
	cin >> optiune;
	if (optiune == 1)
		mtocm();
	if (optiune == 2)
		mtomm();
	if (optiune == 3)
		mtokm();
	if (optiune == 4)
		cmtom();
	if (optiune == 5)
		mmtom();
	if (optiune == 6)
		kmtom();
	if (optiune == 7)
		mmtocm();
	if (optiune == 8)
		cmtomm();
	return 0;
}
int arie()
{
	int optiune;
	cout << "Ati ales conversiile pentru arie." << endl;
	cout << "Scrieti 1 daca doriti sa convertiti metri patrati in hectare." << endl;
	cout << "Scrieti 2 daca doriti sa convertiti metri patrati in arii. " << endl;
	cout << "Scrieti 3 daca doriti sa convertiti hectare in metri patrati. " << endl;
	cout << "Scrieti 4 daca doriti sa convertiti arii in metri patrati. " << endl;
	cout << "Scrieti 5 daca doriti sa convertiti arii in hectare. " << endl;
	cout << "Scrieti 6 daca doriti sa convertiti hectare in arii. " << endl;
	cin >> optiune;
	if (optiune == 1)
		m2toha();
	if (optiune == 2)
		m2toa();
	if (optiune == 3)
		hatom2();
	if (optiune == 4)
		atom2();
	if (optiune == 5)
		atoha();
	if (optiune == 6)
		hatoa();
	return 0;
}
int volum()
{
	int optiune;
	cout << "Ati ales conversiile pentru volum." << endl;
	cout << "Scrieti 1 daca doriti sa convertiti metri cubi in litri." << endl;
	cout << "Scrieti 2 daca doriti sa convertiti litri in metri cubi. " << endl;
	cout << "Scrieti 3 daca doriti sa convertiti centimetri cubi in metri cubi. " << endl;
	cout << "Scrieti 4 daca doriti sa convertiti metri cubi in centimetri cubi. " << endl;
	cout << "Scrieti 5 daca doriti sa convertiti litri in mililitri. " << endl;
	cout << "Scrieti 6 daca doriti sa convertiti mililitri in litri. " << endl;
	cin >> optiune;
	if (optiune == 1)
		m3tol();
	if (optiune == 2)
		ltom3();
	if (optiune == 3)
		cm3tom3();
	if (optiune == 4)
		m3tocm3();
	if (optiune == 5)
		ltoml();
	if (optiune == 6)
		mltol();
	return 0;
}
int timp()
{
	int optiune;
	cout << "Ati ales conversiile pentru timp." << endl;
	cout << "Scrieti 1 daca doriti sa convertiti minute in secunde. " << endl;
	cout << "Scrieti 2 daca doriti sa convertiti ore in secunde. " << endl;
	cout << "Scrieti 3 daca doriti sa convertiti ore in minute. " << endl;
	if (optiune == 1)
		mintosec();
	if (optiune == 2)
		htosec();
	if (optiune == 3)
		htomin();
	return 0;
}
int temperatura()
{
	int optiune;
	cout << "Ati ales conversiile pentru temperatura." << endl;
	cout << "Scrieti 1 daca doriti sa convertiti grade celsius in grade fahrenheit. " << endl;
	cout << "Scrieti 2 daca doriti sa convertiti grad fahrenheit in grade celsius. " << endl;
	if (optiune == 1)
		ctof();
	if (optiune == 2)
		ftoc();
	return 0;
}
int masa()
{
	int optiune;
	cout << "Ati ales conversiile pentru masa." << endl;
	cout << "Scrieti 1 daca doriti sa convertiti grame in kilograme. " << endl;
	cout << "Scrieti 2 daca doriti sa convertiti grame in miligrame. " << endl;
	cout << "Scrieti 3 daca doriti sa convertiti kilograme in grame. " << endl;
	cout << "Scrieti 4 daca doriti sa convertiti miligrame in grame. " << endl;
	if (optiune == 1)
		gtokg();
	if (optiune == 2)
		gtomg();
	if (optiune == 3)
		kgtog();
	if (optiune == 4)
		mgtog();
	return 0;
}
int energie()
{
	int optiune;
	cout << "Ati ales conversiile pentru energie." << endl;
	cout << "Scrieti 1 daca doriti sa convertiti jouli in kilojouli. " << endl;
	cout << "Scrieti 2 daca doriti sa convertiti calorii in jouli. " << endl;
	if (optiune == 1)
		jtokj();
	if (optiune == 2)
		caltoj();
	return 0;
}
int presiune()
{
	int optiune;
	cout << "Ati ales conversiile pentru presiune." << endl;
	cout << "Scrieti 1 daca doriti sa convertiti bari in PSI. " << endl;
	cout << "Scrieti 2 daca doriti sa convertiti PSI in bari. " << endl;
	if (optiune == 1)
		bartopsi();
	if (optiune == 2)
		psitobar();
	return 0;
}
int densitate()
{
	int optiune;
	cout << "Ati ales conversiile pentru densitate." << endl;
	cout << "Scrieti 1 daca doriti sa convertiti g/cm3 in kg/m3. " << endl;
	cout << "Scrieti 2 daca doriti sa convertiti kg/m3 in g/cm3. " << endl;
	if (optiune == 1)
		gcm3tokgm3();
	if (optiune == 2)
		kgm3togcm3();
	return 0;
}

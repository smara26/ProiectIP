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
	system("color f1");
	
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
	cout << "\t\t\t Pentru IESIRE scrie I\n";
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
	if (rubrica == 'I' || rubrica == 'i')
		system("close");

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
	cin >> optiune;
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
	cin >> optiune;
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
	cin >> optiune;
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
	cin >> optiune;
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
	cin >> optiune;
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
	cin >> optiune;
	if (optiune == 1)
		gcm3tokgm3();
	if (optiune == 2)
		kgm3togcm3();
	return 0;
}


double mtocm()
{
	double m;
	double cm;
	int DaNu;
	cout << "Scrieti numarul de metri pe care doriti sa ii transformati in centimetri: ";
	cin >> m;
	cm = m * 100;
	cout << m << " metri sunt egali cu " << cm << " centimetri\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru lungime?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		lungime();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double mtomm()
{
	double m;
	double mm;
	int DaNu;
	cout << "Scrieti numarul de metri pe care doriti sa ii transformati in milimetri: ";
	cin >> m;
	mm = m * 1000;
	cout << m << " metri sunt egali cu " << mm << " milimetri\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru lungime?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		lungime();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double mtokm()
{
	double m;
	double km;
	int DaNu;
	cout << "Scrieti numarul de metri pe care doriti sa ii transformati in kilometri: ";
	cin >> m;
	km = m / 1000;
	cout << m << " metri sunt egali cu " << km << " kilometri\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru lungime?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		lungime();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double cmtom()
{
	double cm;
	double m;
	int DaNu;
	cout << "Scrieti numarul de centimetri pe care doriti sa ii transformati in metri: ";
	cin >> cm;
	m = cm / 100;
	cout << cm << " centimetri sunt egali cu " << m << " metri\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru lungime?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		lungime();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double mmtom()
{
	double mm;
	double m;
	int DaNu;
	cout << "Scrieti numarul de milimetri pe care doriti sa ii transformati in metri: ";
	cin >> mm;
	m = mm / 1000;
	cout << mm << " milimetri sunt egali cu " << m << " metri\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru lungime?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		lungime();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double kmtom()
{
	double km;
	double m;
	int DaNu;
	cout << "Scrieti numarul de kilometri pe care doriti sa ii transformati in metri: ";
	cin >> km;
	m = km * 1000;
	cout << km << " kilometri sunt egali cu " << m << " metri\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru lungime?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		lungime();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double mmtocm()
{
	double mm;
	double cm;
	int DaNu;
	cout << "Scrieti numarul de milimetri pe care doriti sa ii transformati in centimetri: ";
	cin >> mm;
	cm = mm / 10;
	cout << mm << " milimetri sunt egali cu " << cm << " centimetri\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru lungime?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		lungime();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double cmtomm()
{
	double cm;
	double mm;
	int DaNu;
	cout << "Scrieti numarul de centimetri pe care doriti sa ii transformati in milimetri: ";
	cin >> cm;
	mm = cm * 10;
	cout << cm << " centimetri sunt egali cu " << mm << " milimetri\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru lungime?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		lungime();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double m2toha()
{
	double m2;
	double ha;
	int DaNu;
	cout << "Scrieti numarul de metri patrati pe care doriti sa ii transformati in hectre: ";
	cin >> m2;
	ha = m2 / 10000;
	cout << m2 << " metri patrati sunt egali cu " << ha << "hectare\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru arie?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		arie();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double m2toa()
{
	double m2;
	double a;
	int DaNu;
	cout << "Scrieti numarul de metri patrati pe care doriti sa ii transformati in arii: ";
	cin >> m2;
	a = m2 / 100;
	cout << m2 << " metri patrati sunt egali cu " << a << " arii\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru arie?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		arie();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double hatom2()
{
	double ha;
	double m2;
	int DaNu;
	cout << "Scrieti numarul de hectare pe care doriti sa le transformati in metri patrati: ";
	cin >> ha;
	m2 = ha * 10000;
	cout << ha << " hectare sunt egale cu " << m2 << " metri patrati\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru arie?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		arie();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double atom2()
{
	double a;
	double m2;
	int DaNu;
	cout << "Scrieti numarul de arii pe care doriti sa le transformati in metri patrati: ";
	cin >> a;
	m2 = a * 100;
	cout << a << " arii sunt egale cu " << m2 << " metri patrati\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru arie?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		arie();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double atoha()
{
	double a;
	double ha;
	int DaNu;
	cout << "Scrieti numarul de arii pe care doriti sa le transformati in hectare: ";
	cin >> a;
	ha = a / 100;
	cout << a << " arii sunt egale cu " << ha << " hectare\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru arie?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		arie();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double hatoa()
{
	double ha;
	double a;
	int DaNu;
	cout << "Scrieti numarul de hectare pe care doriti sa le transformati in arii: ";
	cin >> ha;
	a = ha * 100;
	cout << ha << " hectare sunt egale cu " << a << " arii\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru arie?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		arie();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double m3tol()
{
	double m3;
	double l;
	int DaNu;
	cout << "Scrieti numarul de metri cubi pe care doriti sa ii transformati in litri: ";
	cin >> m3;
	l = m3 * 1000;
	cout << m3 << " metri cubi sunt egali cu " << l << " litri\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru volum?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		volum();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double ltom3()
{
	double m3;
	double l;
	int DaNu;
	cout << "Scrieti numarul de litri pe care doriti sa ii transformati in metri cubi: ";
	cin >> l;
	m3 = l / 1000;
	cout << l << " litri sunt egali cu " << m3 << " metri cubi\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru volum?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		volum();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double cm3tom3()
{
	double m3;
	double cm3;
	int DaNu;
	cout << "Scrieti numarul de centimetri cubi pe care doriti sa ii transformati in metri cubi: ";
	cin >> cm3;
	m3 = cm3 / 1000000;
	cout << cm3 << " centimetri cubi sunt egali cu " << m3 << " metri cubi\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru volum?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		volum();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double m3tocm3()
{
	double m3;
	double cm3;
	int DaNu;
	cout << "Scrieti numarul de metri cubi pe care doriti sa ii transformati in centimetri cubi: ";
	cin >> m3;
	cm3 = m3 * 1000000;
	cout << m3 << " metri cubi sunt egali cu " << cm3 << " centimetri cubi\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru volum?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		volum();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double ltoml()
{
	double ml;
	double l;
	int DaNu;
	cout << "Scrieti numarul de litri pe care doriti sa ii transformati in mililitri: ";
	cin >> l;
	ml = l * 1000;
	cout << l << " litri sunt egali cu " << ml << " mililitri\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru volum?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		volum();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double mltol()
{
	double ml;
	double l;
	int DaNu;
	cout << "Scrieti numarul de mililitri pe care doriti sa ii transformati in litri: ";
	cin >> ml;
	l = ml / 1000;
	cout << ml << " mililitri sunt egali cu " << l << " litri\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru volum?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		volum();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double mintosec()
{
	double sec;
	double m;
	int DaNu;
	cout << "Scrieti numarul de minute pe care doriti sa le transformati in secunde: ";
	cin >> m;
	sec = m * 60;
	cout << m << " minute sunt egale cu " << sec << " secunde\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru timp?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		timp();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double htosec()
{
	double sec;
	double h;
	int DaNu;
	cout << "Scrieti numarul de ore pe care doriti sa le transformati in secunde: ";
	cin >> h;
	sec = h * 3600;
	cout << h << " ore sunt egale cu " << sec << " secunde\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru timp?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		timp();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double htomin()
{
	double h;
	double m;
	int DaNu;
	cout << "Scrieti numarul de ore pe care doriti sa le transformati in minute: ";
	cin >> h;
	m = h * 60;
	cout << h << " ore sunt egale cu " << m << " minute\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru timp?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		timp();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double ftoc()
{
	double c;
	double f;
	int DaNu;
	cout << "Scrieti numarul de grade fahrenheit pe care doriti sa le transformati in grade celsius: ";
	cin >> f;
	c = (f - 32) / 1.8;
	cout << f << " grade fahrenheit sunt egale cu " << c << " grade celsius\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru temperatura?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		temperatura();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double ctof()
{
	double c;
	double f;
	int DaNu;
	cout << "Scrieti numarul de grade celsius pe care doriti sa le transformati in grade fahrenheit: ";
	cin >> c;
	f = (c * 1.8) + 32;
	cout << c << " grade celsius sunt egale cu " << f << " grade fahrenheit\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru temperatura?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		temperatura();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double gtokg()
{
	double g;
	double kg;
	int DaNu;
	cout << "Scrieti numarul de grame pe care doriti sa le transformati in kilograme: ";
	cin >> g;
	kg = g / 1000;
	cout << g << " grame sunt egale cu " << kg << " kilograme\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru masa?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		masa();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double gtomg()
{
	double g;
	double mg;
	int DaNu;
	cout << "Scrieti numarul de grame pe care doriti sa le transformati in miligrame: ";
	cin >> g;
	mg = g * 1000;
	cout << g << " grame sunt egale cu " << mg << " miligrame\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru masa?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		masa();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double kgtog()
{
	double g;
	double kg;
	int DaNu;
	cout << "Scrieti numarul de kilograme pe care doriti sa le transformati in grame: ";
	cin >> kg;
	g = kg * 1000;
	cout << kg << " kilograme sunt egale cu " << g << " grame\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru masa?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		masa();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double mgtog()
{
	double g;
	double mg;
	int DaNu;
	cout << "Scrieti numarul de miligrame pe care doriti sa le transformati in grame: ";
	cin >> mg;
	g = mg / 1000;
	cout << mg << " miligrame sunt egale cu " << g << " grame\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru masa?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		masa();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double jtokj()
{
	double j;
	double kj;
	int DaNu;
	cout << "Scrieti numarul de jouli pe care doriti sa ii transformati in kilojouli: ";
	cin >> j;
	kj = j / 1000;
	cout << j << " jouli sunt egali cu " << kj << " kilojouli\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru energie?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		energie();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double caltoj()
{
	double j;
	double cal;
	int DaNu;
	cout << "Scrieti numarul de calorii pe care doriti sa le transformati in jouli: ";
	cin >> cal;
	j = cal * 4.184;
	cout << cal << " calorii sunt egale cu " << j << " jouli\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru energie?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		energie();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double bartopsi()
{
	double bar;
	double psi;
	int DaNu;
	cout << "Scrieti numarul de bari pe care doriti sa ii transformati in PSI: ";
	cin >> bar;
	psi = bar * 14.22;
	cout << bar << " bari sunt egali cu " << psi << " PSI\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru presiune?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		presiune();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double psitobar()
{
	double psi;
	double bar;
	int DaNu;
	cout << "Scrieti numarul de PSI pe care doriti sa ii transformati in bari: ";
	cin >> psi;
	bar = psi * 0.0703;
	cout << psi << " PSI sunt egali cu " << bar << " bari\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru presiune?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		presiune();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double gcm3tokgm3()
{
	double gcm3;
	double kgm3;
	int DaNu;
	cout << "Scrieti numarul de g/cm3 pe care doriti sa le transformati in kg/m3: ";
	cin >> gcm3;
	kgm3 = gcm3 / 1000;
	cout << gcm3 << " g/cm3 sunt egali cu " << kgm3 << " kg/m3\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru densitate?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		densitate();
	if (DaNu == 2)
		mainmenu();
	return 0;
}
double kgm3togcm3()
{
	double kgm3;
	double gcm3;
	int DaNu;
	cout << "Scrieti numarul de kg/m3 pe care doriti sa ii transformati in g/cm3: ";
	cin >> kgm3;
	gcm3 = kgm3 * 1000;
	cout << kgm3 << " kg/m3 sunt egali cu " << gcm3 << " g/cm3\n" << endl;
	cout << "\n\tDoriti sa continuati conversiile pentru densitate?\n";
	cout << "\n\tScrieti 1 daca da sau 2 daca doriti sa va intoarceti la meniul principal\n" << endl;
	cin >> DaNu;
	if (DaNu == 1)
		densitate();
	if (DaNu == 2)
		mainmenu();
	return 0;
}

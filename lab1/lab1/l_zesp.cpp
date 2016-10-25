#include "l_zesp.h"
#include <iostream>


using namespace std;

void Ccomplex::set_re(double newre)
{
	re = newre;
}

double Ccomplex::get_re()
{
	return re;
}

void Ccomplex::set_im(double newim)
{
	im = newim;
}

double Ccomplex::get_im()
{
	return im;
}

Ccomplex::Ccomplex()
{
	set_re(0.0);
	set_im(0.0);

	cout << "Konstruktor bezargumentowy zostal wywolany.\n";
}

Ccomplex::Ccomplex(double _re)
{
	set_re(_re);
	set_im(0.0);

	cout << "Konstruktor jednoargumentowy zostal wywolany.\n";
}
Ccomplex::Ccomplex(double _re, double _im)
{
	set_re(_re);
	set_im(_im);

	cout << "Konstruktor wieloargumentowy (dwuargumentowy) zostal wywolany.\n";
}

Ccomplex::Ccomplex(const Ccomplex & other)
{
	double re = get_re();
	double im = get_im();
	set_re(re);
	set_im(im);

	cout << "Konstruktor kopiujacy zostal wywolany.\n";
}

Ccomplex::~Ccomplex()
{
	cout << "Destruktor zostal wywolany.\n";
}
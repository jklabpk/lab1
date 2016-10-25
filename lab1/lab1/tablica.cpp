#include "l_zesp.h"
#include "tablica.h"


int CTablica::licznik = 0;

void CTablica::set_rowCount(int length)
{
	rowCount = length;
}

CTablica::CTablica(int row, int col) :tab(new Ccomplex *[row]) //drugi wymiar nie mo¿e byæ na liœcie inicjalizacyjnej
{
	++licznik;
	set_rowCount(row);
	for (int i = 0; i < row; ++i)
		tab[i] = new Ccomplex[col];
}

CTablica::~CTablica()
{
	--licznik;
	for (int i = 0; i < rowCount; ++i)
		delete[] tab[i];
	delete[] tab;
}

CTablica::CTablica(CTablica && o) :rowCount(o.rowCount)
{
	++licznik;
	tab = o.tab;
	o.tab = nullptr;
	o.rowCount = 0;
}

CTablica & CTablica::operator=(CTablica && o)
{
	if (this == &o)
		return *this;
	for (int i = 0; i < rowCount; ++i)
		delete[] tab[i];
	delete[] tab;
	tab = o.tab;
	o.tab = nullptr;
	rowCount = o.rowCount;
	o.rowCount = 0;
	return *this;
}

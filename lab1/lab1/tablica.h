class CTablica
{
	Ccomplex ** tab;
	static int licznik;
	int rowCount;

public:
	void set_rowCount(int);
	CTablica(int row, int col);
	CTablica(CTablica && o);
	~CTablica();
	CTablica & operator=(CTablica && o);
};
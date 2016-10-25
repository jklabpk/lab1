class Ccomplex
{
	double re;
	double im;

public:
	void set_re(double);
	double get_re();
	void set_im(double);
	double get_im();
	Ccomplex();
	Ccomplex(double re);
	Ccomplex(double re, double im);
	Ccomplex(const Ccomplex & other);
	~Ccomplex();

};




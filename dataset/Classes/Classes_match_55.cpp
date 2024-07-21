class Vec
{
private:
	Point SP;//Starting Point ?§????
	D3 D;//Direction ??????

	Vec(D3 Direction_ , Point SP_);
public:
	Vec(long double x_ , long double y_ , long double z_ , Point);
	Vec operator+(Vec Partner);
	Vec operator*(Vec Partner);
	Vec operator*(long double ld);
	Vec operator-(Vec Partner);
	Vec operator/(Vec Partner);
	Vec operator/(long double);
	bool operator== (Vec);
	Vec Cross_product(Vec);
	double Inner_product(Vec);
	Vec(Point A , Point B);
	Point getSP();
	Point getGP();
	D3 getD();
	long double length();
	Vec Unit_vec();
	Vec Inverse_vec();
	Vec Reverse_vec();
	bool Vertical(Vec);
	bool Parallel(Vec);
	long double S_vec(Vec);
}
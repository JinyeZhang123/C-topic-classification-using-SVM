class Vec
{
private:
	Point SP;//Starting Point ?§????
	D3 D;//Direction ??????

	Vec(D3 Direction_ , Point SP_);
public:
	Vec(long double x_ , long double y_ , long double z_ , Point);
	Vec operator+